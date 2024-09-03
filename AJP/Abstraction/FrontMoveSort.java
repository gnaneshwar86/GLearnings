// You are using Java
import java.util.*;
interface Move{
    int count(int a[],int n);
}
class sub implements Move{
    public int count(int a[],int n){
        for(int i=n-1;i>=0;i--){
            if(a[i]==n){
                n--;
            }
        }
        return n;
    }
}
class Main{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++)
        a[i]=in.nextInt();
        sub s=new sub();
        System.out.println(s.count(a,n));
    }
}