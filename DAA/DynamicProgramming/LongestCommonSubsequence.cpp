// You are using GCC
#include<iostream>
using namespace std;
int LCS(string a, string b, int n, int m){
    int ar[n + 1][m + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0)
            ar[i][j] = 0;
            else if(a[i-1]==b[j-1])
            ar[i][j] = 1 + ar[i-1][j-1];
            else
            ar[i][j] = max( ar[i][j-1], ar[i-1][j]);
        }
    }
    return ar[n][m];
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<LCS(a,b,a.length(),b.length());
}