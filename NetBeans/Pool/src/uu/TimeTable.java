package uu;

import java.awt.BorderLayout;
import java.awt.EventQueue;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.table.TableCellEditor;
import javax.swing.*;
import javax.swing.GroupLayout.Alignment;

import org.eclipse.wb.swing.FocusTraversalOnArray;

import java.awt.Component;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class TimeTable extends JFrame {

	private JPanel contentPane;

	private Connection connect = null;
	  private Statement statement = null;
	  private PreparedStatement preparedStatement = null;
	  private ResultSet resultSet = null;
	  private JTable table;
	  /**

	/**
	 * Launch the application.
	 */
		  // You need to close the resultSet
		  private void close() {
			    try {
			        if (resultSet != null) {
			          resultSet.close();
			        }

			        if (statement != null) {
			          statement.close();
			        }

			        if (connect != null) {
			          connect.close();
			        }
			      } catch (Exception e) {

			      }
		  }
	
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					TimeTable frame = new TimeTable();
					frame.setVisible(true);
					Timeslot tt=new Timeslot();
					tt.bookSlot(1);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public TimeTable() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		
		try{
		Class.forName("com.mysql.jdbc.Driver");
	      // Setup the connection with the DB
	      connect = DriverManager
	          .getConnection("jdbc:mysql://localhost/login?"
	              + "user=userlogin&password=userloginpw");

	      // Statements allow to issue SQL queries to the database
	      statement = connect.createStatement();
	      // Result set get the result of the SQL query
	      resultSet = statement
	          .executeQuery("select * from login.timetable");
	      preparedStatement = connect
	          .prepareStatement("SELECT id,start, end, status, day, capacity from login.timetable");
	      resultSet = preparedStatement.executeQuery();
	      Object[][] data=new Object[100][6];int i=0,j=0;
		    while (resultSet.next()) {
			      // It is possible to get the columns via name
			      // also possible to get the columns via the column number
			      // which starts at 1
			      // e.g. resultSet.getSTring(2);
		    
		        
			      String start = resultSet.getString("start");
			      String end = resultSet.getString("end");
			      int id=resultSet.getInt("id");
			      String day = resultSet.getString("day");
			      Integer capacity=resultSet.getInt("capacity");
			      Integer status = resultSet.getInt("status");
			      
			      data[i][j]=id;
			      data[i][j+1]=(String)start;
			      data[i][j+2]=(String)end;
			      data[i][j+3]=(String)day;
			      if(status==0)
			    	  data[i][j+4]=(String)"Available";
			      else
			      {
			    	 if(status == 1)
			    		 data[i][j+4]=(String)"Booked";
			    	 if(status == 2)
			    		 data[i][j+4]=(String)"Reserved";
			      }
			      data[i][j+5]=(Integer)capacity;
			//      data[i][j+6]=(String)"Book";
			      i++;
		    }
		    String[] columnNames = {"ID","Start time",
                    "End time",
                    "Day",
                    "status","capacity"
                    };
		    contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.X_AXIS));
		    table = new JTable(data, columnNames);
		    
		  //  table.getColumn("Book").setCellRenderer(new ButtonRenderer());
		   // table.getColumn("Book").setCellEditor(
		    //		new ButtonEditor(new JCheckBox()));
		   
			table.setColumnSelectionAllowed(false);
			table.setCellSelectionEnabled(false);
			JScrollPane scrollPane = new JScrollPane(table);
			contentPane.add(scrollPane);
			contentPane.add(scrollPane);
		}
		    catch(Exception er)
		    {
		    	er.printStackTrace();
		    }finally {
			      close();
			    }
		
		
		contentPane.setFocusTraversalPolicy(new FocusTraversalOnArray(new Component[]{table}));
	}
}
