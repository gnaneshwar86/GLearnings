// You are using Java
import java.util.*;
public class Stack1{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        Stack<Integer> s=new Stack<Integer>();
        for(int i=0;i<n;i++)
        s.add(in.nextInt());
        System.out.println(s.pop());
        System.out.println("Top Element : "+s.peek());
        int p=s.search(in.nextInt());
        if(p!=-1)
        System.out.println("Element is found at position : "+p);
        else
        System.out.println("Element not found");
    }
}