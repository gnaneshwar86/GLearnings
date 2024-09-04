package Constructor;

// You are using Java
import java.util.*;

class Welcome {
    Welcome() {
        System.out.print("Welcome ");
    }
}

class Hello {
    Hello() {
        System.out.print("Hello ");
    }
}

public class WelcomeHello2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.nextLine();
        Welcome c = new Welcome();
        System.out.println(a);
        Hello b = new Hello();
        System.out.println(a);
    }
}