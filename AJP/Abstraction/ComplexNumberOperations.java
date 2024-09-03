// You are using Java
import java.util.*;
abstract class Complex{
    float a,b,c,d,r,i;
    abstract void add();
    abstract void sub();
    abstract void mul();
    abstract void div();
}
class Addition extends Complex{
    Addition(float a,float b,float c,float d){
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
    }
    void add(){
        r=a+c;
        i=b+d;
        System.out.print("Addition:\n\t");
        if(i>=0)
        System.out.printf("%.4f +%.4f i\n",r,i);
        else
        System.out.printf("%.4f %.4f i\n",r,i);
    }
    void sub(){}
    void mul(){}
    void div(){}
}
class Subtraction extends Complex{
    Subtraction(float a,float b,float c,float d){
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
    }
    void sub(){
        r=a-c;
        i=b-d;
        System.out.print("Subtraction:\n\t");
        if(i>=0)
        System.out.printf("%.4f +%.4f i\n",r,i);
        else
        System.out.printf("%.4f %.4f i\n",r,i);
    }
    void add(){}
    void mul(){}
    void div(){}
}
class Multiplication extends Complex{
    Multiplication(float a,float b,float c,float d){
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
    }
    void mul(){
        r=a*c - b*d;
        i=a*d + b*c;
        System.out.print("Multiplication:\n\t");
        if(i>=0)
        System.out.printf("%.4f +%.4f i\n",r,i);
        else
        System.out.printf("%.4f %.4f i\n",r,i);
    }
    void add(){}
    void sub(){}
    void div(){}
}
class Division extends Complex{
    Division(float a,float b,float c,float d){
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
    }
    void div(){
        float den=(c*c + d*d);
        r=(a*c + b*d)/den;
        i=(b*c - a*d)/den;
        if(den!=0){
            System.out.print("Division:\n\t");
            if(i>=0)
            System.out.printf("%.4f +%.4f i\n",r,i);
            else
            System.out.printf("%.4f %.4f i\n",r,i);
        }
        else{
            System.out.print("Division:\n\t");
            System.out.printf("%.4f %.4f i\n",r,i);
        }
    }
    void add(){}
    void sub(){}
    void mul(){}
}
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        float p=in.nextFloat();
        float q=in.nextFloat();
        float r=in.nextFloat();
        float s=in.nextFloat();
        Addition a=new Addition(p,q,r,s);
        a.add();
        Subtraction b=new Subtraction(p,q,r,s);
        b.sub();
        Multiplication c=new Multiplication(p,q,r,s);
        c.mul();
        Division d=new Division(p,q,r,s);
        d.div();
    }
}