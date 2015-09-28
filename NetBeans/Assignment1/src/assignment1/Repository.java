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
public class Repository //extends Book implements Serializable
{
    ArrayList<Book> books=new ArrayList<>();
    Scanner sca=new Scanner(System.in);
    void menu()
    {
       int choice,flag=0;
    
        while(true)
        {
            System.out.println("|*********************************************|");
            System.out.println("|             MY PERSONAL LIBRARY             |");
            System.out.println("|*********************************************|");
            System.out.println("| What do you want to do?                     |");
            System.out.println("| 1. Create new book                          |");
            System.out.println("| 2. Delete book from record                  |");
            System.out.println("| 3. Display book repository                  |");
            System.out.println("| 4. Change a book to type \'reference\'        |");
            System.out.println("| 5. Search for a book                        |");
            System.out.println("| 6. Total cost of books in library           |");
            System.out.println("| 7. Create new friend record                 |");
            System.out.println("| 8. Delete friend record                     |");
            System.out.println("| 9. Modify friend record                     |");
            System.out.println("| 10. Query friend                            |");
            System.out.println("| 11. Issue book to friend                    |");
            System.out.println("| 12. Book return by friend                   |");
            System.out.println("| 13. Query issued books                      |");
            System.out.println("| 14. Query books                             |");
            System.out.println("| 15. Display book statistics                 |");
            System.out.println("| 16. Trace book issue history                |");
            System.out.println("|*********************************************|");
            System.out.println("Enter your choice: ");
            choice=Integer.parseInt(sca.nextLine());
    
            switch(choice)
            {
                case 1:create_bk();
                break;
                case 2:delete_bk();
                break;
                case 3:disp_bkall();
                break;
                case 4:issue_type_change();
                break;
                case 5:search_bk();
                break;
                case 6:totalval();
                break;
                default:System.out.println("Invalid choice");
            }
            if(flag==1)
            {
                System.out.println("Thank You!");
                break;
            }
        } 
    }
    void create_bk()
    {
        System.out.println("Create book, option has been chosen");
        try
        {
            FileInputStream f_in=new FileInputStream("Book.dat");
            ObjectInputStream obj_in=new ObjectInputStream(f_in);
            books=(ArrayList<Book>)obj_in.readObject();
            obj_in.close();
            f_in.close();
        }
        catch(ClassNotFoundException | IOException e){e.printStackTrace();}
    
        int siz,sernum;
        siz=books.size();
        if(siz==0)
            sernum=1;        
        else
            sernum=(books.get(siz-1).serial_bk())+1;
        
        String t, au, d, pu;
        int y, p ,choic;
    
        System.out.println("Please enter the details of the book");
        System.out.println("Title of the book");
        t=sca.nextLine();
        System.out.println("Author of the book");
        au=sca.nextLine();
        System.out.println("Date of Purchase{in DDMMYYYY}");
        d=sca.nextLine();
        System.out.println("Publisher of the book");
        pu=sca.nextLine();
        System.out.println("Year of publication");
        y=Integer.parseInt(sca.nextLine());
        System.out.println("Price of the book");
        p=Integer.parseInt(sca.nextLine());
    
        System.out.println("Please mention the type of the book\n1)Issuable\n2)Reference");
        choic=Integer.parseInt(sca.nextLine());
    
        if(choic==1)
        {
            IssueBook ib=new IssueBook(t, au, pu, d, sernum, p, y);            
            books.add(ib);
        }
        else
        {
            RefBook rb=new RefBook(t, au, pu, d, sernum, p, y);
            books.add(rb);
        }
        try
        {
            FileOutputStream f_out=new FileOutputStream("Book.dat");
            ObjectOutputStream obj_out=new ObjectOutputStream(f_out);
            obj_out.writeObject(books);
            obj_out.close();
            f_out.close();
            System.out.println("Successfully created the book");
        }
        catch(IOException e){e.printStackTrace();}
    }
    public int search_bk()
    {
        System.out.println("Search a book, option has been chosen");
        try
        {
            FileInputStream f_in=new FileInputStream("Book.dat");
            ObjectInputStream obj_in=new ObjectInputStream(f_in);
            books=(ArrayList<Book>)obj_in.readObject();
            obj_in.close();
            f_in.close();
        }
        catch(ClassNotFoundException | IOException e){e.printStackTrace();}
    
        int n,k;
        boolean flag=false;
        n=books.size();
        
        if(n==0)
        {
            System.out.println("Sorry!\nThere are no books present in the library\nGoing back to the menu");
            return 0;
        }
        
        System.out.println("Please enter the Name(or substring) of the book to be searched for");
        String search=sca.nextLine();
        for(Book sb: books)
        {
            k=((sb.name()).indexOf(search));
            if(k>=0)
            {
                if(!flag)
                {
                    System.out.println("The following book(s) match");
                    System.out.println("--------------------------------------------------------------------------------------");
                    flag=true;
                }
//                System.out.println("Serial Number       : "+sb.serial);
//                System.out.println("Title               : "+sb.bookname);
//                System.out.println("Year of Publication : "+sb.year);
//                System.out.println("Date of Purchase    : "+sb.dop);
//                System.out.println("Price               : Rs "+sb.price);
//                System.out.println("Publisher           : "+sb.publish);
                sb.disp_bk();
                if(sb instanceof IssueBook)
                {
                    System.out.println("Type: Issuable");
                }
                else
                {
                    System.out.println("Type: Reference");
                }
                System.out.println("--------------------------------------------------------------------------------------");
            }            
        }
        if(flag) return 1;
        else return 0;
    }
    public void disp_bkall()
    {
        if(num == 0)
        {   
            System.out.printf("\nError: The Book Repository is empty right now, returning back to main menu. Enter new books first\n");
            return;
        }
        int i=0;
        Book b = null;
        ObjectInputStream s = null;
        try {  FileInputStream f = new FileInputStream ("Book.dat");
            s = new ObjectInputStream (f);
        } catch (IOException e) { e.printStackTrace(); }
        try { books = (ArrayList<Book>) s.readObject (); }
        catch (ClassNotFoundException e) { e.printStackTrace(); } 
        catch (InvalidClassException e) { e.printStackTrace(); } 
        catch (StreamCorruptedException e) { e.printStackTrace(); } 
        catch (OptionalDataException e) { e.printStackTrace(); } 
        catch (IOException e) { e.printStackTrace(); }
        for( ; i < num ; i++)
        {
            b = books.get(i);
            b.disp_bk();
            if(b instanceof IssueBook)
                {
                    System.out.println("Type: Issuable");
                }
                else
                {
                    System.out.println("Type: Reference");
                }
        }     
    }
    
    public void delete_bk()
    {
        System.out.println("Delete book, option has been chosen! \n");
        Book b;
        try
        {
            FileInputStream f_in=new FileInputStream("Book.dat");
            ObjectInputStream obj_in=new ObjectInputStream(f_in);
            books=(ArrayList<Book>)obj_in.readObject();
            obj_in.close();
            f_in.close();
        }
        catch(ClassNotFoundException | IOException e){e.printStackTrace();}
        if(books.isEmpty())
        {
            System.out.printf("\nSorry!\nThere are no books present in the library\nGoing back to the menu");
            return;
        } 
        else {
        }
    
        System.out.printf("\nPlease enter the title of the book to be deleted: ");
        String todelete=sca.nextLine();
        int i,n,flag=0;
        String title;
        n=books.size();
 
        for(i=0;i<n;i++)
        { 
            b = books.get(i);
            title=(b.name());
            if(todelete.equals(title))
            {
                books.remove(i);
                IssueBook.totalval -= b.price_bk();
                IssueBook.num--;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            System.out.printf("\nDeletion was successful");      
            try
            {
                FileOutputStream f_out=new FileOutputStream("Book.dat");
                ObjectOutputStream obj_out=new ObjectOutputStream(f_out);
                obj_out.writeObject(books);
                obj_out.close();
                f_out.close();
            }
            catch(IOException e){e.printStackTrace();}
        }
        else
        System.out.println("Could not find a book with such a title");
    
    }
    public void totalval()
    {
        System.out.println("Total Value, option has been chosen");
        try
        {
            FileInputStream f_in=new FileInputStream("Book.dat");
            ObjectInputStream obj_in=new ObjectInputStream(f_in);
            books=(ArrayList<Book>)obj_in.readObject();
            obj_in.close();
            f_in.close();
        }
        catch(ClassNotFoundException | IOException e){e.printStackTrace();}
        
        int sum=0;
        for(Book tcb: books)
        {
            sum += tcb.price_bk();
        }
        System.out.println("Total cost of the books in library is "+sum);
    }
    public void issue_type_change()
    {
        System.out.println("Change book to reference, option has been chosen");
        try
        {
            FileInputStream f_in=new FileInputStream("Book.dat");
            ObjectInputStream obj_in=new ObjectInputStream(f_in);
            books=(ArrayList<Book>)obj_in.readObject();
            obj_in.close();
            f_in.close();
        }
        catch(ClassNotFoundException | IOException e){e.printStackTrace();}
    
        int i,n,flag=0;
        n=books.size();
        if(n==0)
        {
            System.out.println("Sorry!\nThere are no books present in the library\nGoing back to the menu");
            return;
        }
    
        System.out.println("Please enter the title of the book which is to be changed to reference");
        String change=sca.nextLine();
        i=0;
        for(Book cb: books)
        {
            if((cb.name()).equals(change))
            {
                if(cb instanceof RefBook)
                    continue;
                IssueBook ib = new IssueBook(cb);
                RefBook rbook = ib.change_type();
                books.remove(i);
                books.add(i,rbook);
                try
                {
                    FileOutputStream f_in=new FileOutputStream("Book.dat");
                    ObjectOutputStream obj_out=new ObjectOutputStream(f_in);
                    obj_out.writeObject(books);
                    obj_out.close();
                    f_in.close();
                    System.out.println("The change was successfully made");
                    flag=1;
                    break;
                }
                catch(IOException e){e.printStackTrace();}
            }
            i++;
        }
        if(flag==0)
        System.out.println("Sorry!\nThere is no issuable book in the library with the requested title");
    }
}
   
