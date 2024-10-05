package ControlFlowAndRegex;
// You are using Java
import java.util.*;
import java.util.regex.*;
public class MatchFound
{
    public static void main(String args[])
    {
        Scanner t=new Scanner(System.in);
        String str=t.nextLine();
        System.out.println(str);
        String a=".+\\d$";
        if(str.matches(a))
        {
            System.out.println("Found a match!");
        }
        else
        {
            System.out.println("Not matched!");
        }
    }
}