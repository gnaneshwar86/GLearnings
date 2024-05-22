// You are using Java
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[][] a=new int[n][n];
        int[][] b=new int[n][n];
        int[][] c=new int[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        a[i][j]=in.nextInt();
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        b[i][j]=in.nextInt();
        System.out.println("Matrix Addition:");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print((a[i][j]+b[i][j])+" ");
            }System.out.println();
        }
        System.out.println("Matrix Subtraction:");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print((a[i][j]-b[i][j])+" ");
            }System.out.println();
        }
        System.out.println("Matrix Multiplication:");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
                System.out.print(c[i][j]+" ");
            }System.out.println();
        }
        
    }
}