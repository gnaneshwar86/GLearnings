// You are using Java
import java.util.*;
import java.util.regex.*;
public class PasswordValidation2
{
    public static void main(String args[])
    {
        String s;
        Scanner r=new Scanner(System.in);
        s=r.nextLine();
        Pattern p=Pattern.compile("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[@#$%^&*=]).{8,}$");
        Matcher m=p.matcher(s);
        if(m.matches())
        {
            System.out.println("Valid password");
        }
        else
        {
            System.out.println("Invalid password");
            
        }
    }
}