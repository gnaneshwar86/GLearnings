// You are using Java
import java.util.*;
public class ReplaceDollar{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        System.out.println(a.replaceAll("\\b0+(\\d+)","$1"));
    }
}