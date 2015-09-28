package uu;

import java.awt.BorderLayout;
import java.util.Date;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;

import java.awt.CardLayout;

import javax.swing.JInternalFrame;
import javax.swing.JButton;

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.swing.ButtonGroup;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.LayoutStyle.ComponentPlacement;
import javax.swing.JRadioButton;
import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import java.awt.Color;
import javax.swing.ImageIcon;

public class Cover extends JFrame {

	private JPanel contentPane;
	private Connection connect = null;
	  private Statement statement = null;
	  private PreparedStatement preparedStatement = null;
	  private ResultSet resultSet = null;
	  /**
	   * @wbp.nonvisual location=42,59
	   */
	  private JTextField textField;
	  private JTextField textField_1;
	  /**
	   * @wbp.nonvisual location=32,69
	   */
	  
	/**
	 * Launch the application.
	 */
	  public void readDataBase() throws Exception {
		  try {
		      // This will load the MySQL driver, each DB has its own driver
		      Class.forName("com.mysql.jdbc.Driver");
		      // Setup the connection with the DB
		      connect = DriverManager
		          .getConnection("jdbc:mysql://localhost/login?"
		              + "user=userlogin&password=userloginpw");

		      // Statements allow to issue SQL queries to the database
		      statement = connect.createStatement();
		      // Result set get the result of the SQL query
		      resultSet = statement
		          .executeQuery("select * from login.userlogin");
		      writeResultSet(resultSet);

		      // PreparedStatements can use variables and are more efficient
		      preparedStatement = connect
		          .prepareStatement("insert into  login.userlogin values (default, ?, ?, ?)");
		      // "myuser, webpage, datum, summery, userlogin from feedback.comments");
		      // Parameters start with 1
		      preparedStatement.setString(1, "Test");
		      preparedStatement.setString(2, "TestEmail");
		      preparedStatement.setString(3, "TestWebpage");
		      preparedStatement.executeUpdate();

		      preparedStatement = connect
		          .prepareStatement("SELECT username, password, type from login.userlogin");
		      resultSet = preparedStatement.executeQuery();
		      writeResultSet(resultSet);

		      // Remove again the insert comment
		      preparedStatement = connect
		      .prepareStatement("delete from login.userlogin where username= ? ; ");
		      preparedStatement.setString(1, "Test");
		      preparedStatement.executeUpdate();
		      
		      resultSet = statement
		      .executeQuery("select * from login.userlogin");
		      writeMetaData(resultSet);
		      
		    } catch (Exception e) {
		      throw e;
		    } finally {
		      close();
		    }

		  }

		  private void writeMetaData(ResultSet resultSet) throws SQLException {
		    //   Now get some metadata from the database
		    // Result set get the result of the SQL query
		    
		    System.out.println("The columns in the table are: ");
		    
		    System.out.println("Table: " + resultSet.getMetaData().getTableName(1));
		    for  (int i = 1; i<= resultSet.getMetaData().getColumnCount(); i++){
		      System.out.println("Column " +i  + " "+ resultSet.getMetaData().getColumnName(i));
		    }
		  }

		  private void writeResultSet(ResultSet resultSet) throws SQLException {
			    // ResultSet is initially before the first data set
			    while (resultSet.next()) {
			      // It is possible to get the columns via name
			      // also possible to get the columns via the column number
			      // which starts at 1
			      // e.g. resultSet.getSTring(2);
			      String user = resultSet.getString("username");
			      String pass = resultSet.getString("password");
			      String type = resultSet.getString("type");
			  
			      System.out.println("User: " + user);
			      System.out.println("Wpass: " + pass);
			      System.out.println("type: " + type);
			     
			    }
		  }

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
					Cover frame = new Cover();
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
	public Cover() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBackground(Color.CYAN);
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		
		JPanel panel = new JPanel();
		panel.setBackground(new Color(102, 255, 255));
		
		JButton btnLogin = new JButton("Login");
		btnLogin.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e)  {
				try{
			//	readDataBase();
					Class.forName("com.mysql.jdbc.Driver");
				      // Setup the connection with the DB
				      connect = DriverManager
				          .getConnection("jdbc:mysql://localhost/login?"
				              + "user=userlogin&password=userloginpw");

				      // Statements allow to issue SQL queries to the database
				      statement = connect.createStatement();
				      // Result set get the result of the SQL query
				      resultSet = statement
				          .executeQuery("select * from login.userlogin");
				preparedStatement = connect
				          .prepareStatement("SELECT username, password, type from login.userlogin");
				      resultSet = preparedStatement.executeQuery();
					    while (resultSet.next()) {
						      // It is possible to get the columns via name
						      // also possible to get the columns via the column number
						      // which starts at 1
						      // e.g. resultSet.getSTring(2);
						      String user = resultSet.getString("username");
						      String pass = resultSet.getString("password");
						      String type = resultSet.getString("type");
						      if(textField.getText().equalsIgnoreCase(user) && textField_1.getText().matches(pass))
						      {
						    	  System.out.println("kola");
						    	  break;
						      }
						      
					    }
				}
				catch(Exception ee)
				{
					ee.printStackTrace();
				}
				
			}
		});
		String[] petStrings = { "Guest user", "Manager", "Administrator"};
		JComboBox comboBox = new JComboBox(petStrings);
		comboBox.setToolTipText("");
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"Guest user", "Manager", "Administrator"}));
		comboBox.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent k) {
				JComboBox cb = (JComboBox)k.getSource();
		        String petName = (String)cb.getSelectedItem();
		        //updateLabel(petName);
			}
		});
		
		JLabel lblNewLabel = new JLabel("New label");
		lblNewLabel.setIgnoreRepaint(true);
		lblNewLabel.setIconTextGap(0);
		lblNewLabel.setIcon(new ImageIcon("C:\\Users\\Ankur Garg\\Downloads\\cover.png"));
		GroupLayout gl_contentPane = new GroupLayout(contentPane);
		gl_contentPane.setHorizontalGroup(
			gl_contentPane.createParallelGroup(Alignment.TRAILING)
				.addGroup(gl_contentPane.createSequentialGroup()
					.addContainerGap()
					.addGroup(gl_contentPane.createParallelGroup(Alignment.LEADING)
						.addGroup(gl_contentPane.createSequentialGroup()
							.addComponent(panel, GroupLayout.DEFAULT_SIZE, 424, Short.MAX_VALUE)
							.addContainerGap())
						.addGroup(gl_contentPane.createSequentialGroup()
							.addComponent(comboBox, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE)
							.addPreferredGap(ComponentPlacement.RELATED, 205, Short.MAX_VALUE)
							.addComponent(btnLogin)
							.addGap(63))
						.addGroup(gl_contentPane.createSequentialGroup()
							.addComponent(lblNewLabel, GroupLayout.PREFERRED_SIZE, 406, GroupLayout.PREFERRED_SIZE)
							.addContainerGap(GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
		);
		gl_contentPane.setVerticalGroup(
			gl_contentPane.createParallelGroup(Alignment.TRAILING)
				.addGroup(Alignment.LEADING, gl_contentPane.createSequentialGroup()
					.addContainerGap()
					.addComponent(panel, GroupLayout.PREFERRED_SIZE, 30, GroupLayout.PREFERRED_SIZE)
					.addGap(14)
					.addGroup(gl_contentPane.createParallelGroup(Alignment.BASELINE)
						.addComponent(comboBox, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE)
						.addComponent(btnLogin))
					.addPreferredGap(ComponentPlacement.RELATED, 42, Short.MAX_VALUE)
					.addComponent(lblNewLabel, GroupLayout.PREFERRED_SIZE, 120, GroupLayout.PREFERRED_SIZE)
					.addContainerGap())
		);
		
		
		JLabel lblUsername = new JLabel("Username");
		panel.add(lblUsername);
		
		textField = new JTextField();
		textField.setBackground(new Color(255, 255, 255));
		panel.add(textField);
		textField.setColumns(10);
		
		JLabel lblPassword = new JLabel("password");
		panel.add(lblPassword);
		
		textField_1 = new JTextField();
		panel.add(textField_1);
		textField_1.setColumns(10);
		
		
		
		contentPane.setLayout(gl_contentPane);
	}
}

