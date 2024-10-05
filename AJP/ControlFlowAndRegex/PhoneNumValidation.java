package ControlFlowAndRegex;
// You are using Java
import java.util.*;
import java.util.regex.*;
public class PhoneNumValidation
{
    public static void main(String args[])
    {
    String s;
    Scanner r=new Scanner(System.in);
    s=r.nextLine();
    Pattern p=Pattern.compile("\\(\\d{3}\\)\\s\\d{3}[-]\\d{4}$");
    Matcher m=p.matcher(s);
    if(m.find())
    {
        System.out.println(s+" is a valid phone number.");
    }
    else
    {
        System.out.println(s+" is not a valid phone number.");
        
    }
    }
}