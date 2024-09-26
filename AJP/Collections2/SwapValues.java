// You are using Java
import java.util.*;
public class SwapValues{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        ArrayList<Integer>a=new ArrayList<>();
        for(int i=0;i<n;i++){
            a.add(in.nextInt());
        }
        for(int i=0,j=a.size()-1;i<a.size()/2&&j>=a.size()/2;i++,j--){
            Collections.swap(a,i,j);
            System.out.println(a);
        }
    }
}