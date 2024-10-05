package ControlFlowAndRegex;
// You are using Java
import java.util.*;
import java.util.regex.*;
public class ContainsTF
{
    public static void main(String args[])
    {
        Scanner t=new Scanner(System.in);
        String str=t.nextLine();
        String a=t.nextLine();
        Pattern p=Pattern.compile(a);
        Matcher m=p.matcher(str);
        if(m.matches())
        {
            System.out.println(str+" contains "+a+" : true");
        }
        else
            System.out.println(str+" contains "+a+" : false");
    }
}