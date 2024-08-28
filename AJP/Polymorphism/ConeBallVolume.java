// You are using Java
import java.util.*;
import java.text.*;
class Icecream{
    DecimalFormat d=new DecimalFormat("0.00");
    public void Quantity(int r,int h){
        double qty=0.33*3.14*r*r*h;
        System.out.println(d.format(qty));
    }
    public void Quantity(int r){
        double qty=1.33*3.14*r*r*r;
        System.out.println(d.format(qty));
    }
}
class Main{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Icecream a=new Icecream();
        int r=in.nextInt();
        if(in.hasNextInt()){
            int h=in.nextInt();
            a.Quantity(r,h);
        }
        else
            a.Quantity(r);
    }
}