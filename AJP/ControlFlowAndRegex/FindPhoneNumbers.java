// You are using Java
import java.util.*;
import java.util.regex.*;
public class FindPhoneNumbers{
    public static void main(String args[])
    {
        String s;
        Scanner r=new Scanner(System.in);
        s=r.nextLine();
        Pattern p=Pattern.compile("[+][1][-]\\d{3}[-]\\d{3}[-]\\d{4}");
        Matcher m=p.matcher(s);
        boolean f=false;
        while(m.find())
        {
            System.out.println("Phone number: "+m.group());
            f=true;
        }
        if(f==false)
        {
            System.out.println("No Phone Numbers");
            
        }
    }
}