// You are using Java
import java.util.*;
public class Main{
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[][] a=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
                if(i==j && a[i][j]==0){
                    System.out.println("The diagonal contains other than 1");
                    return;
                }
            }
        }
        System.out.println("The both diagonal are filled with 1");
    }
}