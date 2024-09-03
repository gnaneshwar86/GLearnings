// You are using Java
import java.util.*;
abstract class First{
    abstract void input();
    abstract void add();
    abstract void result();
}
class Main extends First{
    int a,b,res;
    Scanner in=new Scanner(System.in);
    void input(){
        a=in.nextInt();
        b=in.nextInt();
    }
    void add(){
        res=a+b;
    }
    void result(){
        System.out.println(res);
    }
    public static void main(String args[]) 
    {
        Main st = new Main();
        st.input();
        st.add();
        st.result();
    }
}