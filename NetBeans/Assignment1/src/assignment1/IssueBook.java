/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment1;

import static assignment1.Book.*;
import java.io.*;
import java.util.*;

/**
 *
 * @author mankeyboy
 */
public class IssueBook extends Book implements Serializable
{
    @Override
    public final void issue_type()
    {
        super.issuability=true;
    }
    public IssueBook()
    {
        issue_type();       
    }
    public IssueBook(String bn, String au, String pub, String d, int s, int p, int y)
    {
        super(bn, au, pub, d, s, p, y);
        issue_type();        
    }
    public IssueBook(Book B)
    {
        this.author = B.author;
        this.bookname = B.bookname;
        this.dop = B.dop;
        this.publish = B.publish;
        this.serial = B.serial;
        this.year = B.year;
        this.price = B.price;
        this.issuability = true;                
    }
    public RefBook change_type()
    {
        RefBook rb = new RefBook(this.bookname, this.author, this.dop, this.publish, this.serial, this. price, this.year);
        return rb;
    }
}
