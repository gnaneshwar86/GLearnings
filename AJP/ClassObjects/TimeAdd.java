// You are using Java
import java.util.*;
class Time{
    int h,m,s;
}
public class TimeAdd{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Time t[]=new Time[2];
        for(int i=0;i<2;i++){
            t[i]=new Time();
            t[i].h=in.nextInt();
            t[i].m=in.nextInt();
            t[i].s=in.nextInt();
        }
        int res=0;
        for(int i=0;i<2;i++){
            res+=t[i].h*3600;
            res+=t[i].m*60;
            res+=t[i].s;
        }
        int a=res/3600;
        int b=(res%3600)/60;
        int c=((res%3600)%60);
        System.out.println(((a>12)?a-12:a)+" "+b+" "+c);
    }
}