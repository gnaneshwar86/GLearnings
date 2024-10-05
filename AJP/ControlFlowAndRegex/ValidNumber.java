package ControlFlowAndRegex;
// You are using Java
import java.util.*;
import java.util.regex.*;
public class ValidNumber
{
    public static void main(String args[])
    {
        Scanner t=new Scanner(System.in);
        String str=t.nextLine();
        String a="([7-9]\\d{9})";
        if(str.matches(a))
        {
            System.out.println(str+" : Valid Number");
        }
        else
        {
            System.out.println(str+" : Invalid Number");
        }
    }
}