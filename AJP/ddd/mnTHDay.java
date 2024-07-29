// You are using Java
import java.util.*;
class mnTHDay{
    public static int find(int a,int b){
        int r=(a>b)?a:b;
        while(true){
            if(r%a==0&&r%b==0)
            break;
            r++;
        }
        return r;
    }
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        System.out.println(find(a,b));
    }
}