/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment2;

import java.io.*;
import java.util.*;
/**
 *
 * @author mankeyboy
 */
public class Manager implements Serializable 
{
    ArrayList<Car> Vehicles;
    String CurrentSerialNumber;
    int ACBookCount=0, NonACBookCount=0;
    int NextSerialNumber;
    public Manager ()
    {
        Vehicles = new ArrayList<>();  
        try
        {
            FileOutputStream fs = new FileOutputStream("Vehiclelist.txt",true);
            fs.close();
            FileReader fr = new FileReader("Vehiclelist.txt");
            BufferedReader reader = new BufferedReader(fr);
            if(reader.readLine() != null)
            {
                reader.close();
                try (ObjectInputStream is = new ObjectInputStream(new FileInputStream("vehiclelist.txt"))) 
                {
                    Object  one = is.readObject();
                    Vehicles = (ArrayList<Car>) one;
                }
            }
        }catch(IOException | ClassNotFoundException ex){}
        //int NextSerialNumber;
        CurrentSerialNumber = "0";
	try
        {
            FileWriter Fw = new FileWriter("TotalVehicle.txt",true);
            Fw.close();
            FileReader Fr = new FileReader("TotalVehicle.txt");
            BufferedReader reader = new BufferedReader(Fr);
            CurrentSerialNumber = reader.readLine();
            if(CurrentSerialNumber == null)
            {
                CurrentSerialNumber = "0";
            }
            reader.close();
	}catch(IOException ex){}
        NextSerialNumber = Integer.parseInt(CurrentSerialNumber);
        NextSerialNumber += 1;
        CurrentSerialNumber = Integer.toString(NextSerialNumber);
    }
    public void addCar(String S)
    {
        Car v = new Car(S); 
        v.sno = CurrentSerialNumber;
        Vehicles.add(v);
        try
        {
            FileOutputStream filestream = new FileOutputStream("Vehiclelist.txt");
            try (ObjectOutputStream os = new ObjectOutputStream(filestream)) 
            {
                os.writeObject(Vehicles);
            }
	}catch(Exception ex){}
        try
        {
            try (BufferedWriter writer = new BufferedWriter(new FileWriter("TotalVehicle.txt",false))) 
            {
                writer.write(CurrentSerialNumber);
            }
	}catch(IOException ex){}
    }
    public int RentCar(String sno,String[] docs)
    {
        for(Car v: Vehicles)
        {
            if(sno.equals(v.sno))
            {
                if(v.ret_state() == CarState.Available)
                {
                    v.changekmreading(docs[0]);
                    v.expectedreturndate(docs[1]);
                    v.AdvancePayment = Integer.parseInt(docs[2]); 
                    v.set_customer(docs[3]);
                    v.inc_bkcnt();
                    if(v.isAC == true)
                    {
                        ACBookCount++;
                    }
                    else
                    {
                        NonACBookCount++;
                    }
                    v.set_state(CarState.Rented);
                    try
                    {
                        FileOutputStream filestream = new FileOutputStream("Vehiclelist.txt");
                        try (ObjectOutputStream os = new ObjectOutputStream(filestream)) 
                        {
                            os.writeObject(Vehicles);
                        }
                    }catch(Exception ex){}
                    return 1;
                }   
            }
        } 
        return 0;
    }
    public int[] ReturnCar(String Sno,String[] docs)
    {
        int [] a = {0,0};
        for(Car v : Vehicles)
        {
            if(Sno.equals(v.sno))
            {
                if(v.ret_state() == CarState.Rented)
                {
                    v.set_state(CarState.Available);
                    int price1;
                    int price2;
                    price1 = (Integer.parseInt(docs[0]) - Integer.parseInt(v.retkmreading()))*(v.Charge_pk);
                    if(Integer.parseInt(docs[1]) >= 4)
                        price2 = Integer.parseInt(docs[1])*(v.Charge_ph);
                    else
                        price2 = v.Charge_ph*4;
                    int RequiredPrice;
                    RequiredPrice = Math.max(price1,price2);
                    int Price = v.AdvancePayment - RequiredPrice;
                    try
                    {
                        FileOutputStream filestream = new FileOutputStream("Vehiclelist.txt");
                        try (ObjectOutputStream os = new ObjectOutputStream(filestream)) 
                        {
                            os.writeObject(Vehicles);
                        }
                    }catch(Exception ex){}
                    a[0] = 1;
                    a[1] = Price;
                    return a;
                }
            }
        }
        return a;   
    }
    public int RepairCar(String sno)
    {
        for(Car v : Vehicles)
        {
            if(sno.equals(v.sno))
            {
                if(v.ret_state() == CarState.Available)
                {
                    v.set_state(CarState.InRepair);
                    try
                    {
                        FileOutputStream filestream = new FileOutputStream("Vehiclelist.txt");
                        try (ObjectOutputStream os = new ObjectOutputStream(filestream)) 
                        {
                            os.writeObject(Vehicles);
                        }
                    }catch(Exception ex){}
                    return 1;
                }
            }
        }
        return 0;
    }
    public int BackRepairCar(String sno,String Cost)
    {
        for(Car v : Vehicles)
        {
            if(sno.equals(v.sno))
            {
                if(v.ret_state() == CarState.InRepair)
                {
                    v.set_state(CarState.Available);
                    v.repair(Integer.parseInt(Cost));
                    try
                    {
                        FileOutputStream filestream = new FileOutputStream("Vehiclelist.txt");
                        try (ObjectOutputStream os = new ObjectOutputStream(filestream)) 
                        {
                            os.writeObject(Vehicles);
                        }
                    }catch(Exception ex){}
                    return 1;
                }
            }
        }
        return 0;
    }
    public int SellCar(String Sno,String Price)
    {
        for(Car v : Vehicles)
        {
            if(Sno.equals(v.sno))
            {
                if(v.ret_state() == CarState.Available)
                {
                    v.set_state(CarState.Sold);
                    v.revenue(Integer.parseInt(Price));
                    try
                    {
                        FileOutputStream filestream = new FileOutputStream("Vehiclelist.txt");
                        try (ObjectOutputStream os = new ObjectOutputStream(filestream)) 
                        {
                            os.writeObject(Vehicles);
                        }
                    }catch(Exception ex){}
                    return 1;
                }
            }
        }
        return 0; 
    }
    public int CondemnCar(String Sno)
    {
        for(Car v : Vehicles)
        {
            if(Sno.equals(v.sno))
            {
                if(v.ret_state() == CarState.Available)
                {
                    v.set_state(CarState.Condemned);
                    v.condemn_revenue();
                    try
                    {
                        FileOutputStream filestream = new FileOutputStream("Vehiclelist.txt");
                        try (ObjectOutputStream os = new ObjectOutputStream(filestream)) 
                        {
                            os.writeObject(Vehicles);
                        }
                    }catch(Exception ex){}
                    return 1;
                }
            }
        }
        return 0; 
    }
    public ArrayList<Car> GetAll()
    {
        return Vehicles; 
    }
}

