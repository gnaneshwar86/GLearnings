// You are using Java
import java.util.*;
public class Main{
    public static int mm(int c,int d) {
        return c>d?c:d;
    }
    public static int Length(String s1, String s2, int m, int n) {
        int[][] L= new int[m + 1][n + 1];
        for (int i=0;i<=m;i++) {
            for (int j=0;j<=n;j++) {
                if (i==0||j==0) {
                    L[i][j]=0;
                }
                else if (s1.charAt(i-1)==s2.charAt(j-1)) {
                    L[i][j]=1+L[i-1][j-1];
                } 
                else {
                    L[i][j]=mm(L[i][j-1],L[i-1][j]);
                }
            }
        }
        return L[m][n];
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String s1=s.nextLine();
        String s2=s.nextLine();
        int m = s1.length();
        int n = s2.length();
        int l=Length(s1,s2,m,n);
        System.out.println(l);
    }
}