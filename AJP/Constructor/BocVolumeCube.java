// You are using Java
package Constructor;
import java.util.*;
class Box{
    double l,b,h,v=0;
    Box(){
        System.out.printf("Volume of mybox1 is %d\n",(int)v);
    }
    Box(double l,double b,double h){
        this.l=l;
        this.b=b;
        this.h=h;
        v=l*b*h;
        System.out.printf("Volume of mybox2 is %d\n",(int)v);
    }
    Box(double l){
        this.l=l;
        v=l*l*l;
        System.out.printf("Volume of mycube is %d\n",(int)v);
    }
}
public class BocVolumeCube{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Box a=new Box();
        Box b=new Box(in.nextDouble(),in.nextDouble(),in.nextDouble());
        Box c=new Box(in.nextDouble());
        
    }

    @Override
    public String toString() {
        return "BocVolumeCube []";
    }
}