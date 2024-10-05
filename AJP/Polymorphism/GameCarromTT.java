// You are using Java
import java.util.*;
class Game{
    int area(int s){
        return s*s;
    }
    int area(int l,int b){
        return l*b;
    }
}
public class GameCarromTT{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int s=sc.nextInt();
        int l=sc.nextInt();
        int b=sc.nextInt();
        Game g=new Game();
        System.out.println("Area of the Carrom: "+g.area(s)+"cm");
        System.out.println("Area of the TT: "+g.area(l,b)+"cm");
    }
}