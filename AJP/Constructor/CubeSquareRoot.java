package Constructor;

// You are using Java
import java.util.*;
class Demo{
    int a;
    Demo(int a){
        this.a=a;
        System.out.println("Inside constructor");
    }
    void calc(){
        System.out.println("square = "+(a*a));
        System.out.println("square root = "+(Math.sqrt(a)));
        System.out.println("cube = "+(a*a*a));
        System.out.println("cube root = "+Math.cbrt(a));
    }
}
public class CubeSquareRoot{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Demo a=new Demo(in.nextInt());
        a.calc();
    }
}