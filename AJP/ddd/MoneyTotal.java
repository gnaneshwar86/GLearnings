// You are using Java
import java.util.*;
class money{
    int rup,pai;
    void setter(int a,int b){
        rup=a;
        pai=b;
    }
}
public class MoneyTotal{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        money a[]=new money[2];
        for(int i=0;i<2;i++){
            int n=in.nextInt();
            int m=in.nextInt();
            a[i]=new money();
            a[i].setter(n,m);
        }
        double res=0;
        for(int i=0;i<2;i++){
            res+=(double)a[i].rup;
            res+=(double)(a[i].pai)/100;
        }
        System.out.printf("%.2f",res);
        
    }
}