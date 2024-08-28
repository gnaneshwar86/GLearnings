// You are using Java
import java.util.*;
class Rectangle{
    void calculateArea(float a,float b){}
}
class Shape extends Rectangle{
    void calculateArea(float a,float b){
        System.out.printf("Area of rectangle is: %.1f",(a*b));
    }
}
class RectangleArea{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Shape a=new Shape();
        a.calculateArea(in.nextFloat(),in.nextFloat());
    }
}