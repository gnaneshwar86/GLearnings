// You are using Java
import java.util.*;
import java.util.regex.*;
public class IPAddress{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        String p="(\\d{1,3}[0-9]|\\d[0-9]{1,2}|\\d2[0-9]|\\d25[0-9])";
        String pat=p+"\\."+p+"\\."+p+"\\."+p;
        Pattern P=Pattern.compile(pat);
        Matcher m=P.matcher(a);
        if(m.matches())
        System.out.println("IP address "+a+" is Valid");
        else
        System.out.println("IP address "+a+" is Invalid");
    }
}