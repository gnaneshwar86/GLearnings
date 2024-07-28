// You are using Java
import java.util.*;
class SmallestPositiveIntegerArray{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int a[]=new int[1000000];
        for(int i=1;i<1000000-1;i++)
        a[i]=0;
        for(int i=0;i<n;i++){
            int c=in.nextInt();
            if(c>0)
            a[c]++;
        }
        for(int i=1;i<1000000-1;i++){
            if(a[i]==0){
                System.out.println(i);
                break;
            }
        }
    }
}