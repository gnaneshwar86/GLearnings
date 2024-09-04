// You are using Java
import java.util.*;
class Main{
    public static void main(String[]  args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        a[i]=in.nextInt();
        int k=in.nextInt();
        int m=in.nextInt();
        int o=in.nextInt();
        String b=null;
        int p=in.nextInt();
        try{
            System.out.println(a[k]);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index out of bound.");
        }
        try{
            System.out.println(m/o);
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        try{
            System.out.println(b.charAt(p));
        }
        catch(NullPointerException e){
            System.out.println("null");
            System.out.println(e);
        }
    }
}