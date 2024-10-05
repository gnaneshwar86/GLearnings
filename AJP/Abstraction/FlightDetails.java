// You are using Java
import java.io.*;
import java.util.*;
import java.text.DecimalFormat;
interface Airfare
{
   public double calculateAmount();
}

class AirIndia implements Airfare {
   private int hr;
   private double cos;
    AirIndia(int hr,double cos)
    {
        this.hr=hr;
        this.cos=cos;
    }
    public double calculateAmount()
    {
        return hr*cos;
    }
}
class KingFisher implements Airfare {
   private int hr;
   private double cos;
    KingFisher(int hr,double cos)
    {
        this.hr=hr;
        this.cos=cos;
    }
    public double calculateAmount()
    {
        return hr*cos*4;
    }
    // Type your code here
}
class Indigo implements Airfare {
    // Type your code here
   private int hr;
   private double cos;
    Indigo(int hr,double cos)
    {
        this.hr=hr;
        this.cos=cos;
    }
    public double calculateAmount()
    {
        return hr*cos*8;
    }
}
public class FlightDetails {
public static void main(String [] args) {
    // Type your code here
    int c,hr;
    double co;
    Scanner r=new Scanner(System.in);
    c=r.nextInt();
    hr=r.nextInt();
    co=r.nextDouble();
    DecimalFormat f=new DecimalFormat("0.00");
    switch(c)
    {
        case 1:
            Airfare ob=new AirIndia(hr,co);
            System.out.println(f.format(ob.calculateAmount()));
            break;
        case 2:
            Airfare ob1=new KingFisher(hr,co);
            System.out.println(f.format(ob1.calculateAmount()));
            break;
        case 3:
            Airfare ob2=new Indigo(hr,co);
            System.out.println(f.format(ob2.calculateAmount()));
            break;
    }
    
}
}
