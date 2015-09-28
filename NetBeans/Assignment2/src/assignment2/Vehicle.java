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
public abstract class Vehicle implements Serializable 
{
    protected CarState state;
    public String sno;
    public Boolean isAC;
    public int Charge_ph;
    public int Charge_pk;
    public int Price;
    public int AdvancePayment;
    protected int MaintenanceCost;
    protected int RepairCost;
    protected int RevenueEarned;
    protected int Mileage;
    protected int Bookcount;
    protected String RentedDate;
    protected String CurrentKMReading;
    protected String ExpectedRetDate;
    public abstract void set_state(CarState temp);
    public String retkmreading()
    {
        return CurrentKMReading;
    }
    public void changekmreading(String s)
    {
        CurrentKMReading = s;
    }
    
    public void expectedreturndate(String s)
    {
        ExpectedRetDate = s;
    }
    public String getreturndate(String s)
    {
        return ExpectedRetDate;
    }
    public void setrenteddate(String s)
    {
        RentedDate = s;
    }
    public String getrenteddate(String s)
    {
        return RentedDate;
    }
    public void inc_bkcnt()
    {
        Bookcount++;
    }
    public int ret_bkcnt()
    {
        return Bookcount;
    }
    public void maintenance(int cost)
    {
        MaintenanceCost += cost;
        RevenueEarned -= cost;
    }
    public int ret_maintenance()
    {
        return MaintenanceCost;
    }
    public void revenue(int money)
    {
        RevenueEarned += money;
    }
    public void condemn_revenue()
    {
        RevenueEarned -= Price;
    }
    public int ret_revenue()
    {
        return RevenueEarned;
    }
    public void repair(int cost)
    {
        RepairCost += cost;
        RevenueEarned -= cost;
    }
    public int ret_repair()
    {
        return RepairCost;
    }
}
