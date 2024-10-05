// You are using Java
import java.util.*;
import java.util.regex.*;
public class MatchFound{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        Pattern p=Pattern.compile("(\\Bg\\B)");
        Matcher m=p.matcher(a);
        if(m.find())
        System.out.println("Found a match!");
        else
        System.out.println("Not matched!");
    }
}