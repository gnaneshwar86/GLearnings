// You are using Java
import java.sql.*;
import java.util.*;
public class UsernamePassword{
    public static void main(String[]args)throws Exception{
        Scanner in=new Scanner(System.in);
        int c=0;
        Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/ri_db","test","test123");
        String q2="select * from userdetails where user_name='"+(in.nextLine())+"' and pass_word='"+(in.nextLine())+"'";
        PreparedStatement st1=con.prepareStatement(q2);
        ResultSet rs=st1.executeQuery();
        while(rs.next()){
            c++;
        }
        if(c==0)
        System.out.println("Invalid username/password");
        else
        System.out.println("Login Successful");
    }
}