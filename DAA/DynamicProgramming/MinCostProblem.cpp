// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int MinCost(vector<vector<int>>& a, int n, int m){
    int dp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == 0 && j == 0)
                dp[i][j] = a[i][j];
            else if(j == 0)
                dp[i][j] = a[i][j] + dp[i-1][j];
            else if(i == 0)
                dp[i][j] = a[i][j] + dp[i][j-1];
            else
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + a[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<dp[i][j]<<" ";
    //     }cout<<endl;
    // }
    return dp[n-1][m-1];
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>a[i][j];
    cout<<MinCost(a,n,m);
}