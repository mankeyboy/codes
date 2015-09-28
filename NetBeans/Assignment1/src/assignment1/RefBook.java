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
public class RefBook extends Book implements Serializable
{
    @Override
    public final void issue_type()
    {
        super.issuability=false;
    }
    
    public RefBook()
    {
        issue_type();       
    }
    public RefBook(String bn, String au, String pub, String d, int s, int p, int y)
    {
        super(bn, au, pub, d, s, p, y);
        issue_type();        
    }
    public RefBook(Book B)
    {
        this.author = B.author;
        this.bookname = B.bookname;
        this.dop=B.dop;
        this.publish=B.publish;
        this.serial=B.serial;
        this.year=B.year;
        this.price=B.price;
        this.issuability=false;                
    }
    public IssueBook change_type()
    {
        IssueBook ib = new IssueBook(this.bookname, this.author, this.dop, this.publish, this.serial, this. price, this.year);
        return ib;
    }
}
