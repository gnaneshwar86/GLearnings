package ControlFlowAndRegex;
// You are using Java
import java.util.*;
import java.util.regex.*;
public class IPAddressValidation{
    public static void main(String args[])
    {
        String a;
        Scanner r=new Scanner(System.in);
        a=r.next();
        Pattern p=Pattern.compile(
            "^(25[0-5]|2[0-4][0-9]|[10]?[0-9][0-9]?)\\."+
            "(25[0-5]|2[0-4][0-9]|[10]?[0-9][0-9]?)\\."+
            "(25[0-5]|2[0-4][0-9]|[10]?[0-9][0-9]?)\\."+
            "(25[0-5]|2[0-4][0-9]|[10]?[0-9][0-9]?)$"
            );
        Matcher m=p.matcher(a);
        if(m.find())
        {
            System.out.println(a+" is a valid IP address.");
        }
        else
        {
            System.out.println(a+" is not a valid IP address.");
            
        }
        
    }
}