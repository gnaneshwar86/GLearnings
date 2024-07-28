// You are using Java
import java.util.*;
class LCM{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        int r=(a>b)?a:b;
        while(true){
            if(r%a==0&&r%b==0)
            break;
            r++;
        }
        System.out.println(r);
    }
}