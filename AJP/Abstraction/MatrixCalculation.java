// You are using Java
import java.util.*;
interface Matrix{
    void diagonalsMinMax(int a[][],int n);
}
class Diagonal implements Matrix{
    public void diagonalsMinMax(int a[][],int n){
        int x=a[0][0],y=a[0][n-1],p=a[0][0],q=a[0][n-1];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(i==j){
            if(a[i][j]<x)
            x=a[i][j];
            if(a[i][j]>p)
            p=a[i][j];
        }
        else if(i+j==n-1){
            if(a[i][j]<y)
            y=a[i][j];
            if(a[i][j]>q)
            q=a[i][j];
        }
        System.out.println("Smallest Element - 1: "+x);
        System.out.println("Greatest Element - 1: "+p);
        System.out.println("Smallest Element - 2: "+y);
        System.out.println("Greatest Element - 2: "+q);
    }
}
public class MatrixCalculation{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }
        Diagonal d=new Diagonal();
        d.diagonalsMinMax(a,n);
    }
}