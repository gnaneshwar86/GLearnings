// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int knapsack(int W, int weights[], int values[], int n){
    int dp[n + 1][W + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            if(i == 0)
                dp[i][j] = 0;
            else if( weights[i-1] <= j )
                dp[i][j] = max( dp[i-1][j], dp[i-1][j-weights[i-1]] + values[i-1] );
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= W; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][W];
}
int main(){
    int n, W;
    cin >> n;
    int weights[n], values[n];
    for(int i = 0; i < n; i++)
        cin>>values[i];
    for(int i = 0; i < n; i++)
        cin>>weights[i];
    cin>>W;
    cout<<knapsack(W,weights,values,n);
}