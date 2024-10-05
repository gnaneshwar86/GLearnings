// You are using Java
import java.util.*;
import java.util.regex.*;
public class HexaDecimalNumber
{
    public static void main(String args[])
    {
        String s;
        Scanner r=new Scanner(System.in);
        s=r.next();
        Pattern p=Pattern.compile("^[0-9A-Fa-f]+$");
        Matcher m=p.matcher(s);
        if(m.find())
        {
            System.out.println("The text is a hexadecimal number.");
        }
        else
        {
            
            System.out.println("The text is not a hexadecimal number.");
        }
    }
}