// You are using Java
import java.util.*;
public class WordReverse{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        String[] b=a.split(" ");
        for(int i=b.length-1;i>=0;i--){
            System.out.print(b[i]+" ");
        }
    }
}