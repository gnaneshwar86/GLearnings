package ControlFlowAndRegex;
// You are using Java
import java.util.*;
import java.util.regex.*;
public class OriginalNewString
{
    public static void main(String args[])
    {
        Scanner t=new Scanner(System.in);
        String str=t.nextLine();
        System.out.println("Original string: "+str);
        String a=str.replaceAll("[^(aeiouAEIOU)]","");
        System.out.println("New string: "+a.length());
    }
}