// You are using Java
import java.util.*;
import java.util.regex.*;
public class DatatypeFind{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        if(a.matches("\\d+"))
        System.out.println("The datatype of "+a+" is: java.lang.Integer");
        else if(a.matches("\\d+[.]+\\d+"))
        System.out.println("The datatype of "+a+" is: java.lang.Double");
        else if(a.matches("(\\d{2}[/]\\d{2}[/]\\d{4})|(\\d{2}[-]\\w{3,5}[-]\\d{2,4})"))
        System.out.println("The datatype of "+a+" is: java.util.Date");
        else
        System.out.println("The datatype of "+a+" is: java.lang.String");
    }
}