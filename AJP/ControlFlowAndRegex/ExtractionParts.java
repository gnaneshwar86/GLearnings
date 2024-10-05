package ControlFlowAndRegex;
// You are using Java
import java.util.*;
import java.util.regex.*;
public class ExtractionParts
{
    public static void main(String args[])
    {
        Scanner t=new Scanner(System.in);
        String str=t.nextLine();
        String b=t.nextLine();
        Pattern p=Pattern.compile(".*'([^']*)'.*");
        Matcher m=p.matcher(str);
        Matcher m1=p.matcher(b);
        while(m.find())
        {
            System.out.println("First Extracted part:"+m.group(1));
        }
        while(m1.find())
        {
            System.out.println("Second Extracted part:"+m1.group(1));
        }
    }
}