// You are using Java
import java.sql.*;
import java.util.*;
public class EmployeeGenderDept{
    public static void main(String[]args)throws Exception{
        Scanner in=new Scanner(System.in);
        Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/ri_db","test","test123");
        PreparedStatement st1=con.prepareStatement("");
        String q2="select * from employee where gender='"+(in.nextLine())+"' and dept='"+(in.nextLine())+"'";
        ResultSet rs=st1.executeQuery(q2);
        while(rs.next()){
            System.out.println("Employee ID : "+rs.getInt(1)+" Name : "+rs.getString(3)+" "+rs.getString(4));
        }
    }
}