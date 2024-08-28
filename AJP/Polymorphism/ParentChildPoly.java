import java.util.*;
class Parent{
    void m1(){
        System.out.println("From parent m1()");
    }
    void m2(int a){
        System.out.println(a);
    }
}
class Child extends Parent{
    void m1(){
        System.out.println("From child m1()");
    }
    void m2(int a){
        System.out.println(a);
    }
}
class ParentChildPoly
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();
        Parent obj1 = new Parent();
        obj1.m1();
        obj1.m2(a);
        Parent obj2 = new Child();
        obj2.m1();
        obj2.m2(b);
    }
}