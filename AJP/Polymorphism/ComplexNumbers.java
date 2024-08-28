// You are using Java
import java.util.*;
class Complex{
    float r,i;
    Complex(float r,float i){
        this.r=r;
        this.i=i;
    }
    void add(Complex a){
        System.out.print("Sum of Complex Numbers: (");
        System.out.print((this.r+a.r) +" + "+ (this.i+a.i) + "i)");
    }
}
class ComplexNumbers{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Complex a=new Complex(in.nextFloat(),in.nextFloat());
        Complex b=new Complex(in.nextFloat(),in.nextFloat());
        a.add(b);
    }
}