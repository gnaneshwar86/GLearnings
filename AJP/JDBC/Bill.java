// You are using Java
import java.sql.*;
import java.util.*;
public class Bill{
    public static void main(String[]args)throws Exception{
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine()),c=0;
        Class.forName("com.mysql.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost/ri_db","test","test123");
        String q1="insert into BILL values(?,?,?,?,?)";
        PreparedStatement st1=con.prepareStatement(q1);
        for(int i=0;i<n;i++){
            int id=Integer.parseInt(in.nextLine());
            String name=in.nextLine();
            String dept=in.nextLine();
            String add=in.nextLine();
            float gpa=Float.parseFloat(in.nextLine());
            st1.setInt(1,id);
            st1.setString(2,name);
            st1.setString(3,dept);
            st1.setString(4,add);
            st1.setFloat(5,gpa);
            st1.execute();
        }
        String find=in.nextLine();
        String q2="select * from BILL where DNAME='"+find+"'";
        ResultSet rs=st1.executeQuery(q2);
        while(rs.next()){
            c++;
            System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3)+" "+rs.getString(4)+" "+rs.getFloat(5));
        }
        if(c==0)
        System.out.println("No students in "+find+" department");
    }
}