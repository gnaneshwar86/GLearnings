// You are using Java
import java.util.*;
import java.util.regex.*;
public class ValidIdentifier{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        Pattern p=Pattern.compile("([a-zA-Z]+)");
        Matcher m=p.matcher(a);
        if(m.find()&&m.group().equals(a))
        System.out.println(a+":Valid Identifier");
        else
        System.out.println(a+":Invalid Identifier");
    }
}