// You are using Java
import java.sql.*;
import java.util.*;
public class StudentInsert{
    public static void main(String[]args)throws Exception{
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine());
        Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/ri_db","test","test123");
        String q1="insert into STUDENT values(?,?,?)";
        PreparedStatement st1=con.prepareStatement(q1);
        for(int i=0;i<n;i++){
            int id=Integer.parseInt(in.nextLine());
            String name=in.nextLine();
            int m=Integer.parseInt(in.nextLine());
            st1.setInt(1,id);
            st1.setString(2,name);
            st1.setInt(3,m);
            st1.execute();
        }
        String q2="select * from STUDENT";
        ResultSet rs=st1.executeQuery(q2);
        while(rs.next()){
            System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3));
        }
    }
}