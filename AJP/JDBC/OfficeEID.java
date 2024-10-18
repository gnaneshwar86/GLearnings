// You are using Java
import java.sql.*;
import java.util.*;
public class OfficeEID{
    public static void main(String[]args)throws Exception{
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine());
        Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/ri_db","test","test123");
        String q1="delete from office where eid=?;";
        PreparedStatement st1=con.prepareStatement(q1);
        st1.setInt(1,n);
        st1.execute();
        String q2="select * from office";
        ResultSet rs=st1.executeQuery(q2);
        while(rs.next()){
            System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3));
        }
    }
}