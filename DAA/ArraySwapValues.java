// You are using Java
import java.util.*;
public class Main{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++)a[i]=in.nextInt();
        for(int i=1;i<n;i+=2){
            int t=a[i];
            a[i]=a[i-1];
            a[i-1]=t;
        }
        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
        
    }
}