// You are using Java
import java.util.*;
class TotalExpenses{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        double a=in.nextInt();
        double b=in.nextInt();
        double c=in.nextInt();
        double d=in.nextInt();
        double t=a+b+c+d;
        System.out.printf("Total expenses : Rs.%.2f\n",t);
        System.out.printf("Branding expenses percentage : %.2f%%\n",a/t*100);
        System.out.printf("Travel expenses percentage : %.2f%%\n",b/t*100);
        System.out.printf("Food expenses percentage : %.2f%%\n",c/t*100);
        System.out.printf("Logistics expenses percentage : %.2f%%\n",d/t*100);
    }
}