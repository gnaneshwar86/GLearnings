// You are using Java
import java.util.*;
class Converter{
    public double convert(double celsius){
        return ((celsius - 32.0)*(5.0/9.0));
    }
    public double convert(double fahrenheit,boolean toCelsius){
        return (fahrenheit * (9.0/5.0) + 32);
    }
}
class TemperatureConverter{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Converter a=new Converter();
        double t=in.nextDouble();
        char c=in.next().charAt(0);
        if(c=='F')
        System.out.println(t+" F = "+a.convert(t)+" C");
        else
        System.out.println(t+" C = "+a.convert(t,true)+" F");
    }
}