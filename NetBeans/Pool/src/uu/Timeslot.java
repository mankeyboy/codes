package uu;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

public class Timeslot {
	private Connection connect = null;
	  private Statement statement = null;
	  private PreparedStatement preparedStatement = null;
	  private ResultSet resultSet = null;
	  
	public void createSlot(String start,String end,String day,boolean reserved) throws Exception
	{
		try {
		      Class.forName("com.mysql.jdbc.Driver");
		      connect = DriverManager
		          .getConnection("jdbc:mysql://localhost/login?"
		              + "user=userlogin&password=userloginpw");
		      // PreparedStatements can use variables and are more efficient
		      preparedStatement = connect
		         .prepareStatement("insert into  login.timetable values (default, ?, ?, ?, ? , ?)");
		      
		      preparedStatement.setString(1, start);
		      preparedStatement.setString(2,end);
		      if(reserved)
		    	  preparedStatement.setInt(3, 2);
		      else
		    	  preparedStatement.setInt(3, 0);
		      preparedStatement.setString(4, day);
		      preparedStatement.setInt(5,0);
		      preparedStatement.executeUpdate();
		}
		
		catch (Exception e) {
		      throw e;
		    } finally {
		      close();
		    }
		
	}
	public void close() {
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
	public void bookSlot(int idd)
	{
		try{
		      //STEP 2: Register JDBC driver
		      Class.forName("com.mysql.jdbc.Driver");
		      connect = DriverManager
			          .getConnection("jdbc:mysql://localhost/login?"
			              + "user=userlogin&password=userloginpw");
		      statement = connect.createStatement();
		      resultSet = statement
			          .executeQuery("select * from login.timetable");
			      preparedStatement = connect
			          .prepareStatement("SELECT id,start, end, status, day, capacity from login.timetable");
			      resultSet = preparedStatement.executeQuery();
			      boolean flag=false;
			      while(resultSet.next())
			      {
			    	  if(idd == resultSet.getInt("id") && (resultSet.getInt("capacity") < 20) && (resultSet.getInt("status") == 0))
			    	  {
			    		  flag=true;
			    		  break;
			    	  }
			      }
			      if(flag)
			      {
			    	  String updateString =
			    			    "update login.timetable " +
			    			    "set STATUS = ? where ID = ?";
			    	 
			    	  PreparedStatement  updateSales = connect.prepareStatement(updateString);
			    	  updateSales.setInt(1,1);
			    	  updateSales.setInt(2, idd);
			    	  updateSales.executeUpdate();
			      }
		}
		catch(Exception er)
	    {
	    	er.printStackTrace();
	    }finally {
		      close();
		    }
	}
	public void reserveSlot(int idd)
	{
		try{
		      //STEP 2: Register JDBC driver
		      Class.forName("com.mysql.jdbc.Driver");
		      connect = DriverManager
			          .getConnection("jdbc:mysql://localhost/login?"
			              + "user=userlogin&password=userloginpw");
		      statement = connect.createStatement();
		      String updateString =
	    			    "update login.timetable " +
	    			    "set STATUS = ? where ID = ?";
	    	 
	    	  PreparedStatement  updateSales = connect.prepareStatement(updateString);
	    	  updateSales.setInt(1,2);
	    	  updateSales.setInt(2, idd);
	    	  updateSales.executeUpdate();
		}
		catch(Exception er)
	    {
	    	er.printStackTrace();
	    }finally {
		      close();
		    }
	}
}