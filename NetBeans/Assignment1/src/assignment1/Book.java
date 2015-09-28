/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment1;

import java.io.*;
import java.util.*;


/**
 *
 * @author mankeyboy
 */
public abstract class Book implements Serializable 
{
    protected String bookname, author, dop, publish;
    protected int year, price, serial;
    public static int totalval = 0 ;
    public static int num = 0 ;
    public boolean issuability;

    @SuppressWarnings("UnnecessaryReturnStatement")
    public String name()
    {
        return this.bookname;
    }
    public int price_bk()
    {
        return this.price;
    }
    public int serial_bk()
    {
        return serial;
    }
    
    public abstract void issue_type();
    
    public void disp_bk()
    {
        if(this.bookname == null)
        {
            System.out.printf("\nERROR: No book present\n");
            return;
        }
        System.out.printf("\n\t\tBook Details:\nSerial Number: %d", serial);
        System.out.printf("\nYear Of Publishing: %d", year);
        System.out.printf("\nnBook Name: %s", bookname);
        System.out.printf("\nBook Author: %s", author);
        System.out.printf("\nPublisher: %s", publish);
        System.out.printf("\nDate of Purchase: %s", dop);
        System.out.printf("\nPrice: Rs. %d/-", price);
        //System.out.printf("\nTotal Value of the books in the library right now: Rs. %d/-\n", totalval);
    }
    public Book()
    {
        
    }
    public Book(String bn, String au, String pub, String d, int s, int p, int y)
    {
        bookname = bn;
        author = au;
        publish = pub;
        dop = d;
        serial = s;
        price = p;
        year = y;
        totalval+=price;
        num++;
    }
}
