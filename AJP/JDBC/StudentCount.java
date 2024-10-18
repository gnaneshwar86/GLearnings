// You are using Java
import java.sql.*;
import java.util.*;
public class StudentCount{
    public static void main(String[]args)throws Exception{
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        in.nextLine();
        Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/ri_db","test","test123");
        String q1="insert into student values(?,?,?,?,?)";
        PreparedStatement st1=con.prepareStatement(q1);
        for(int i=0;i<n;i++){
            int id=Integer.parseInt(in.nextLine());
            String name =in.nextLine();
            int m1=Integer.parseInt(in.nextLine());
            int m2=Integer.parseInt(in.nextLine());
            int m3=Integer.parseInt(in.nextLine());
            st1.setInt(1,id);
            st1.setString(2,name);
            st1.setInt(3,m1);
            st1.setInt(4,m2);
            st1.setInt(5,m3);
            st1.execute();
        }
        System.out.println(n);
    }
}