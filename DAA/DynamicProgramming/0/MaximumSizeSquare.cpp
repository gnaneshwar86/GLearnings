#include<bits/stdc++.h>
using namespace std;
int MSS(vector<vector<int>>& a, int n,int m){
    vector<vector<int>> dp(n, vector<int>(m));
    int maxel = a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || j==0 || a[i][j]==0)
                dp[i][j] = a[i][j];
            else 
                dp[i][j] = min( dp[i-1][j], min( dp[i-1][j-1], dp[i][j-1]) ) + 1;
        }
        auto rmax = *max_element(dp[i].begin(), dp[i].end());
        maxel = max(maxel, rmax);
    }
    return maxel;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    cout<<MSS(a,n,m);
}