package ControlFlowAndRegex;

// You are using Java
import java.util.*;
import java.util.regex.*;
public class NoOfOccurences
{
    public static void main(String args[])
    {
        Scanner t=new Scanner(System.in);
        String a=t.nextLine();
        String b=t.nextLine();
        Pattern p=Pattern.compile(Pattern.quote(a));
        Matcher m=p.matcher(b);
        int count=0;
        while(m.find())
        {
            count++;
        }
        System.out.println("The no of occurences: "+count);
    }
    
}