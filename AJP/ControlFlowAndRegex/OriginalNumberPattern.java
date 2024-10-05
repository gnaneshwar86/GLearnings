// You are using Java
import java.util.*;
import java.util.regex.*;
public class OriginalNumberPattern{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        Pattern p=Pattern.compile("\\.(\\d+)");
        Matcher m=p.matcher(a);
    int v=0;
    while(m.find())
    v=m.group(1).length();
        System.out.println("Original Number: "+a+"\n"+v);
    }
}