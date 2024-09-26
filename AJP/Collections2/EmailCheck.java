// You are using Java
import java.util.*;
public class EmailCheck{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine());
        Set<String>a=new HashSet<>();
        Set<String>b=new HashSet<>();
        for(int i=0;i<n;i++){
            a.add(in.nextLine());
        }
        String[] s=in.nextLine().split(",");
        for(String i:s){
            b.add(i);
        }
        if(a.containsAll(b))
        System.out.println("Email addresses are present");
        else
        System.out.println("Email addresses are not present");
    }
}