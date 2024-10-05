import java.util.*;
class PoolTable{
    void calculatePerimeter(double l,double w){
        System.out.printf("%.1f",2.0*(l+w));
    }
    void calculatePerimeter(double d){
        System.out.printf("\n%.1f",3.14*d);
    }
}
public class PoolTableCalculation{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        double l=sc.nextDouble();
        double w=sc.nextDouble();
        double d=sc.nextDouble();
        PoolTable pt=new PoolTable();
        pt.calculatePerimeter(l,w);
        pt.calculatePerimeter(d);
    }
}