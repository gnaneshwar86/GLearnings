// You are using Java
import java.util.*;
class StallCategory{
    StallCategory(){
        System.out.println("Using Default Constructor");
    }
    StallCategory(String a,String b){
        System.out.println("Using Parameterized Constructor");
        System.out.println(a);
        System.out.println(b);
    }
}
class DefaultParamConstructor{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        StallCategory a=new StallCategory();
        StallCategory b=new StallCategory(in.nextLine(),in.nextLine());
    }
}