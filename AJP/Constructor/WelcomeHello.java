// You are using Java
class Welcome{
    Welcome(){
        System.out.print("Welcome ");
    }
}
class Hello extends Welcome{
    Hello(){
        System.out.println("Hello");
    }
}
public class WelcomeHello{
    public static void main(String[]args){
        Hello a=new Hello();
    }
}