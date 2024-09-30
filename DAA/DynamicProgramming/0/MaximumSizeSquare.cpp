// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void MSS(vector<vector<int>>& a, int n,int m){
    vector<vector<int>> dp(n, vector<int>(m));
    int maxel = a[0][0];
    int k,l;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 || j == 0 || a[i][j] == 0)
                dp[i][j] = a[i][j];
            else 
                dp[i][j] = min( dp[i-1][j], min( dp[i-1][j-1], dp[i][j-1]) ) + 1;
            
            if(dp[i][j] > maxel){
                maxel = dp[i][j];
                k = i;
                l = j;
            }
        }
    }
    //To Print Maximum Size
    cout<<maxel<<endl;
    //To Print Square Matrix with Maximum Size
    for(int i = k - maxel + 1; i <= k; i++){
        for(int j = l - maxel + 1; j <= l; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i = 0; i < n;i++)
        for(int j = 0; j < m; j++)
            cin>>a[i][j];
    MSS(a,n,m);
}