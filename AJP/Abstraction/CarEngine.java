// You are using Java
import java.util.*;
abstract class Car{
    abstract void startEngine();
    abstract void accelerate();
    abstract void stopEngine();
}
class engine extends Car{
    void startEngine(){
        System.out.println("Car engine started.");
    }
    void accelerate(){
        System.out.println("Car is accelerating.");
    }
    void stopEngine(){
        System.out.println("Car engine stopped.");
    }
}
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        while(true){
            int n=in.nextInt();
            engine a=new engine();
            switch(n){
                case 1:
                    a.startEngine();
                    break;
                case 2:
                    a.accelerate();
                    break;
                case 3:
                    a.stopEngine();
                    break;
                case 0:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice, please enter 1, 2, 3, or 0.");
                    break;
            }
            if(n==0){
                break;
            }
            
        }
    }
}