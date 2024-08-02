// You are using Java
import java.util.*;
class NumberConverter{
    char from,to;
    int n;
    public void Main(){
        String s=Integer.toString(n);
        if(from=='D'&&to=='B'){
            System.out.println(Integer.toBinaryString(n));
        }
        else if(from=='D'&&to=='O'){
            System.out.println(Integer.toOctalString(n));
        }
        else if(from=='D'&&to=='H'){
            System.out.println(Integer.toHexString(n));
        }
        else if(from=='B'&&to=='D'){
            System.out.println(Integer.parseInt(s,2));
        }
        else if(from=='B'&&to=='O'){
            int deci=Integer.parseInt(s,2);
            System.out.println(Integer.toOctalString(deci));
        }
        else if(from=='B'&&to=='H'){
            int deci=Integer.parseInt(s,2);
            System.out.println(Integer.toHexString(deci));
        }
        else if(from=='O'&&to=='D'){
            System.out.println(Integer.parseInt(s,8));
        }
        else if(from=='O'&&to=='H'){
            int deci=Integer.parseInt(s,8);
            System.out.println(Integer.toHexString(deci));
        }
        else if(from=='O'&&to=='B'){
            int deci=Integer.parseInt(s,8);
            System.out.println(Integer.toBinaryString(deci));
        }
        else if(from=='H'&&to=='D'){
            System.out.println(Integer.parseInt(s,16));
        }
        else if(from=='H'&&to=='O'){
            int deci=Integer.parseInt(s,16);
            System.out.println(Integer.toOctalString(deci));
        }
        else if(from=='H'&&to=='B'){
            int deci=Integer.parseInt(s,16);
            System.out.println(Integer.toBinaryString(deci));
        }
    }
}
public class NumberConverterMain{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        NumberConverter a=new NumberConverter();
        a.from=in.next().charAt(0);
        a.to=in.next().charAt(0);
        a.n=in.nextInt();
        a.Main();
    }
}