
// You are using Java
import java.util.*;
import java.util.regex.*;
public class PasswordCheck{
    public static void main(String args[])
    {
        Scanner t=new Scanner(System.in);
        String str=t.nextLine();
        String a="(^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!*?&])[A-Za-z\\d@$!*?&]{8,15}$)";
        if(str.matches(a))
        {
            System.out.println(str+" is a valid password");
        }
        else
        {
            System.out.println(str+" is a invalid password");
        }
    }
}