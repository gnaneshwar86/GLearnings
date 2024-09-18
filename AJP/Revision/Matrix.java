// You are using Java
import java.util.*;
class Matrix{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        System.out.print((i+j)+"\t");
        System.out.println();
        
        }
    }
}