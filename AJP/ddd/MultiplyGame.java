// You are using Java
import java.util.*;
class multi{
    int n;
    void game(){
        int p=1,i=1;
        while(p<=n){
            p*=i;
            i++;
        }
        if((i-1)%2==0){
            System.out.println(n+" Michael wins");
        }else
            System.out.println(n+" John wins");
    }
}
public class MultiplyGame{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        multi a=new multi();
        a.n=in.nextInt();
        a.game();
    }
}