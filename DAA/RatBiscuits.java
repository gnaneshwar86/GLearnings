// You are using Java
import java.util.*;
public class RatBiscuits{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++)a[i]=in.nextInt();
        int m=in.nextInt(),s=0,c=0;
        m*=2;
        for(int i=0;i<n;i++){
            s+=a[i];
            c++;
            if(s>=m){
                System.out.println("The number of bowls required to feed the rat = "+c);
                return;
            }
        }
        System.out.println("The biscuits in all bowls are not enough to feed the rats");
    }
}