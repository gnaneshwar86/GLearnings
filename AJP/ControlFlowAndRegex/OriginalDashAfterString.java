// You are using Java
import java.util.*;
import java.util.regex.*;
public class OriginalDashAfterString
{
    public static void main(String args[])
    {
        String s;
        Scanner r=new Scanner(System.in);
        s=r.next();
        System.out.println("Original string: "+s);
        String d=s.replaceAll("([aeiouAEIOU])","-$1-");
        System.out.println("Add a dash before and after every vowel in the said string: "+d);
        
    }
}