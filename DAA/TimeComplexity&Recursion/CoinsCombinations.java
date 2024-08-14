import java.util.Scanner;
class CoinsCombinations {
    public static int count(int a[],int n,int s){
        if(s==0)
        return 1;
        if(s<0)
        return 0;
        if(n<=0)
        return 0;
        
        return count(a,n,s-a[n-1])+count(a,n-1,s);
    }    
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in) ;
        int n = sc.nextInt() ;
        int coins[] = new int[n] ;
        for(int i = 0 ; i < n ; i++)
            coins[i] = sc.nextInt() ;
        int sum = sc.nextInt() ;
        System.out.println(count(coins, n, sum)) ;
    }
}