// You are using Java
import java.util.*;
class FibonacciSeries{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=0,c=1;
        System.out.print(b+" "+c+" ");
        for(int i=2;i<a;i++){
            System.out.print((b+c)+" ");
            int t=b+c;
            b=c;
            c=t;
        }
    }
}