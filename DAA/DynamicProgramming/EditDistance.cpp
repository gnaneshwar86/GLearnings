// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int EditDistance(string a, string b, int n,int m){
    int dp[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(j == 0 )
                dp[i][j] = i;
            else if(i == 0)
                dp[i][j] = j;
            else if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min( dp[i][j-1], min( dp[i-1][j-1], dp[i-1][j]));
        }
    }
        for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++)
    cout<<dp[i][j];
cout<<endl;
    }
    return dp[n][m];
}
int main(){
    string a,b;
    cin>>a>>b;
    cout << EditDistance(a,b,a.length(),b.length());
}