package uu;

import java.awt.BorderLayout;
import java.awt.EventQueue;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.BoxLayout;
import javax.swing.JDesktopPane;
import javax.swing.JScrollPane;
import javax.swing.JLabel;
import javax.swing.JTable;
import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;
import javax.swing.LayoutStyle.ComponentPlacement;
import javax.swing.border.BevelBorder;
import javax.swing.JTextPane;
import com.jgoodies.forms.factories.DefaultComponentFactory;

public class coursepage extends JFrame {

	private Connection connect = null;
	private Statement statement = null;
	private PreparedStatement preparedStatement = null;
	private ResultSet resultSet = null;
	private JPanel contentPane;
	private JTable table;
	
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					coursepage frame = new coursepage();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public coursepage() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		
		JLabel lblWelcomeToCourses = new JLabel("Welcome to Courses");
		
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
		          .executeQuery("select * from login.courselist");
		      preparedStatement = connect
		          .prepareStatement("SELECT id, start, end, day, status, capacity from login.courselist");
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
				    	  data[i][j+4]=(String)"Yet To Start";
				      else
				      {
				    	 if(status == 1)
				    		 data[i][j+4]=(String)"Ongoing";
				    	 if(status == 2)
				    		 data[i][j+4]=(String)"On Hold";
				      }
				      data[i][j+5]=(Integer)capacity;
				      i++;
			    }
			    String[] columnNames = {"ID","Start time",
	                    "End time",
	                    "Day",
	                    "status","capacity"
	                    };
			    contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.X_AXIS));
			    contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.X_AXIS));
				contentPane.add(lblWelcomeToCourses);
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
		
		
	}
}
