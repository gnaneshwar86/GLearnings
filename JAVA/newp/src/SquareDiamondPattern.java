import java.util.*;
public class SquareDiamondPattern {
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int l=2*n-1;
        for(int i=1;i<=l;i++){
            for(int j=1;j<=l;j++){
                if(i==j || i+j==2*n)
                System.out.print(" * ");
                else if(i+j==i+1 || i+j==j+1 || i==l || j==l)
                System.out.print(" * ");
                else
                System.out.print("   ");
            }
            System.out.println();
        }
    }
}
