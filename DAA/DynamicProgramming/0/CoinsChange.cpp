#include<iostream>
using namespace std;
int coinsChange(int a[], int n, int k){
    int dp[n+1][k+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= k; j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
            else if(a[i-1] <= j){
                dp[i][j] = 1 + dp[i][ j - a[i-1] ];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][k];
}
int main(){
    int n = 3;
    int a[] = {1, 2, 5};
    int k = 6;
    cout<<coinsChange(a,n,k);
}