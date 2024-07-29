// You are using Java
import java.util.*;
class user{
    String name,username,pass,mobile;
}
public class UserMatcherMobile{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        user a[]=new user[2];
        for(int i=0;i<2;i++){
            a[i]=new user();
            a[i].name=in.next();
            a[i].username=in.next();
            a[i].pass=in.next();
            a[i].mobile=in.next();
        }
        if(a[0].mobile.equals(a[1].mobile))
        System.out.println("User 1 and User 2 are equal");
        else
        System.out.println("User 1 and User 2 are not equal");
    }
}