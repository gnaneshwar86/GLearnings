// You are using Java
import java.util.*;
public class LinkedList1{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=Integer.parseInt(in.nextLine());
        LinkedList<String> a=new LinkedList<String>();
        for(int i=0;i<n;i++){
            a.add(in.nextLine());
        }
        System.out.println(a);
        for(int i =0;i<n;i++)
        System.out.println("Element at index "+i+" "+a.get(i));
        System.out.println("Last element in the list: "+a.get(n-1));
    }
}