// You are using Java
import java.util.*;
class Constructor{
    int id;
    String name;
    Constructor(int id,String name){
        this.id=id;
        this.name=name;
    }
    Constructor(Constructor c){
        id=c.id;
        name=c.name;
    }
    void display(){
        System.out.println(id+" "+name);
    }
}
class Main{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        Constructor c=new Constructor(in.nextInt(),in.next());
        Constructor b=new Constructor(c);
        c.display();
        b.display();
    }
}
