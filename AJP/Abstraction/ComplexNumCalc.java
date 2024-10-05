// You are using Java
import java.util.*;
abstract class Complex{
    abstract double getMod();
    abstract String getConj();
}
abstract class Modulus extends Complex{
    double n,m;
    Modulus(double n,double m){
        this.n=n;
        this.m=m;
    }
    double getMod(){
        return (Math.sqrt((n*n)+(m*m)));
    }
}
class Conjugate extends Modulus{
    double n,m;
    Conjugate(double n,double m){
        super(n,m);
        this.n=n;
        this.m=m;
    }
    String getConj(){
        return (n+" + -"+m+"i");
    }
}
public class ComplexNumCalc{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double n=sc.nextDouble();
        double m=sc.nextDouble();
        Conjugate c=new Conjugate(n,m);
        System.out.println("Modulus of the complex number: "+c.getMod());
        System.out.println("Conjugate of the complex number: "+c.getConj());
    }
}