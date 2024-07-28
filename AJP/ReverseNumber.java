// You are using Java
import java.util.*;
class ReverseNumber{
    public static int rev(int n){
        if(n==0)
        return 0;
        System.out.print(n%10);
        return rev(n/10);
    }
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        if(n>=0)
        rev(n);
        else{
            System.out.print("-");
            rev(n*(-1));
        }
    }
}