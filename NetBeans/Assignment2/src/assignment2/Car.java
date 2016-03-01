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
public class Car extends Vehicle implements Serializable 
{
    public String name;
    public String customername;
    public Car(String s)
    {
        super.sno = "0"; 
        super.isAC = false;
        name = s;
        if(s == "HM Ambassador")
        {
            Charge_ph = 55;
            Charge_pk = 10;
            Price = 450000;
            state = CarState.Available;
            Bookcount = 0;
            RentedDate = "";
            CurrentKMReading = "0";
            ExpectedRetDate = "";
            AdvancePayment = 0;
            MaintenanceCost = 0;
            RepairCost = 0;
            RevenueEarned = 0;
            Mileage = 35;
        }
        else if( s == "Tata Sumo")
        {
            Charge_ph = 55;
            Charge_pk = 13;
            Price = 750000;
            state = CarState.Available;
            Bookcount = 0;
            RentedDate = "";
            CurrentKMReading = "0";
            ExpectedRetDate = "";
            AdvancePayment = 0;
            MaintenanceCost = 0;
            RepairCost = 0;
            RevenueEarned = 0;
            Mileage = 30;
        }
        else if( s == "Maruti Omni")
        {
            Charge_ph = 60;
            Charge_pk = 15;
            Price = 550000;
            state = CarState.Available;
            Bookcount = 0;
            RentedDate = "";
            CurrentKMReading = "0";
            ExpectedRetDate = "";
            AdvancePayment = 0;
            MaintenanceCost = 0;
            RepairCost = 0;
            RevenueEarned = 0;
            Mileage = 40;
        }
        else if( s == "Maruti Esteem")
        {
            Charge_ph = 80;
            Charge_pk = 20;
            Price = 900000;
            state = CarState.Available;
            Bookcount = 0;
            RentedDate = "";
            CurrentKMReading = "0";
            ExpectedRetDate = "";
            AdvancePayment = 0;
            MaintenanceCost = 0;
            RepairCost = 0;
            RevenueEarned = 0;
            Mileage = 30;
        }
        else if( s == "Mahindra Armada")
        {
            Charge_ph = 55;
            Charge_pk = 12;
            Price = 750000;
            state = CarState.Available;
            Bookcount = 0;
            RentedDate = "";
            CurrentKMReading = "0";
            ExpectedRetDate = "";
            AdvancePayment = 0;
            MaintenanceCost = 0;
            RepairCost = 0;
            RevenueEarned = 0;
            Mileage = 35;
        }
    }
    public Car(String s, Boolean B)
    {
        super.sno = "0";
        super.isAC = B;
        name = s;
        if(B == false)
        {
            if(s == "HM Ambassador")
            {
                Charge_ph = 55;
                Charge_pk = 10;
                Price = 450000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 35;
            }
            else if( s == "Tata Sumo")
            {
                Charge_ph = 55;
                Charge_pk = 13;
                Price = 750000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 30;
            }
            else if( s == "Maruti Omni")
            {
                Charge_ph = 60;
                Charge_pk = 15;
                Price = 550000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 40;
            }
            else if( s == "Maruti Esteem")
            {
                Charge_ph = 80;
                Charge_pk = 20;
                Price = 900000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 30;
            }
            else if( s == "Mahindra Armada")
            {
                Charge_ph = 55;
                Charge_pk = 12;
                Price = 750000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 35;
            }
        }
        else
        {
            if(s == "HM Ambassador")
            {
                Charge_ph = 70;
                Charge_pk = 20;
                Price = 500000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 35;
            }
            else if( s == "Tata Sumo")
            {
                Charge_ph = 75;
                Charge_pk = 25;
                Price = 800000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 30;
            }
            else if( s == "Maruti Omni")
            {
                Charge_ph = 90;
                Charge_pk = 30;
                Price = 600000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 40;
            }
            else if( s == "Maruti Esteem")
            {
                Charge_ph = 100;
                Charge_pk = 35;
                Price = 950000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 35;
            }
            else if( s == "Mahindra Armada")
            {
                Charge_ph = 70;
                Charge_pk = 30;
                Price = 800000;
                state = CarState.Available;
                Bookcount = 0;
                RentedDate = "";
                CurrentKMReading = "0";
                ExpectedRetDate = "";
                AdvancePayment = 0;
                MaintenanceCost = 0;
                RepairCost = 0;
                RevenueEarned = 0;
                Mileage = 35;
            }
        }
    }
    @Override
    public void set_state(CarState temp)
    {
        state = temp;
    }
    public CarState ret_state()
    {
        return state;
    }
    public void set_customer()
    {
        customername = "";
    }
    public void set_customer(String s)
    {
        customername = s;
    }
}
