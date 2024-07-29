// You are using Java
import java.util.*;
class Box{
    double l,b,h;
    void volume(){
        if(l<1||b<1||h<1){
            System.out.println("Invalid");
            return;
        }
        System.out.println(l*b*h);
    }
}
public class BoxVolume{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Box a=new Box();
        a.l=in.nextDouble();
        a.b=in.nextDouble();
        a.h=in.nextDouble();
        a.volume();
    }
}