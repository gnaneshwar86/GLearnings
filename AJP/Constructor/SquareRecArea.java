package Constructor;

// You are using Java
import java.util.*;
class Shape{
    int a,b,c;
    Shape(int a){
        this.a=a;
    }
    Shape(int b,int c){
        this.b=b;
        this.c=c;
    }
    void squareArea(){
        System.out.println(a*a);
    }
    void recArea(){
        System.out.println(b*c);
    }
}
public class SquareRecArea{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Shape a=new Shape(in.nextInt());
        Shape b=new Shape(in.nextInt(),in.nextInt());
        a.squareArea();
        b.recArea();
    }
}