// You are using Java
import java.util.*;
public class Queue1{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        Queue<Integer> q=new LinkedList<Integer>();
        for(int i=0;i<n;i++)
        q.add(in.nextInt());
        System.out.println(q);
        System.out.println("removed element : "+q.remove());
        System.out.println(q);
        System.out.println("head of the queue : "+q.peek());
        System.out.println("size of the queue : "+q.size());
        if(q.contains(in.nextInt()))
        System.out.println("The element is present.");
        else
        System.out.println("The element is not present.");
    }
}