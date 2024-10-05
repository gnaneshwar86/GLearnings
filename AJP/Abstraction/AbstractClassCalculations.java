// You are using Java
import java.util.*;
abstract class AbstractClass{
    abstract int divsum(int n);
}
class Calculator extends AbstractClass{
    int divsum(int n){
        int sum=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
            return sum;
    }
}
public class AbstractClassCalculations{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Calculator cal=new Calculator();
        System.out.println(cal.divsum(n));
    }
}