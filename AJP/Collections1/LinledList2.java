// You are using Java
import java.util.*;
public class LinledList2{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine());
        LinkedList<String> a=new LinkedList<String>();
        for(int i=0;i<n;i++)
        a.add(in.nextLine());
        a.remove(in.nextInt()-1);
        for(String i:a)
        System.out.println(i);
    }
}