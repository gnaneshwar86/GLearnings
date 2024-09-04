// You are using Java
import java.util.*;
class Wall{
    float length,height;
    Wall(float a,float b){
        length=a;
        height=b;
    }
    float calculateArea(){
        return length*height;
    }
}
public class AreaWall{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        Wall a[]=new Wall[2];
        for(int i=0;i<2;i++){
            float l=in.nextFloat();
            float b=in.nextFloat();
            a[i]=new Wall(l,b);
            System.out.printf("Area of Wall %d: %.2f\n",i+1,a[i].calculateArea());
        }
    }
}