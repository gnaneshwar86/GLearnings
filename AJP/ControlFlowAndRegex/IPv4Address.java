// You are using Java
import java.util.*;
import java.util.regex.*;
public class IPv4Address
{
    public static void main(String args[])
    {
        String s;
        Scanner r=new Scanner(System.in);
        s=r.next();
        Pattern p=Pattern.compile(
            "^([01]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])\\."+
            "([01]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])\\."+
            "([10]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])\\."+
            "([10]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])$"
           
           );
        Matcher m=p.matcher(s);
        if(m.find())
        {
            System.out.println("Valid IPv4 address");
        }
        else
        {
            System.out.println("Invalid IPv4 address");
        }
        
        
        
    }
}