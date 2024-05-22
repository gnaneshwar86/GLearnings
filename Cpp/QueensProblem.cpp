// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool isafe(vector<vector<int>>&a,int row,int col,int n){
    for(int i=0;i<col;i++){
        if(a[row][i])
        return false;
    }
    for(int i=row,j=col;i>=0&&j>=0;--i,--j){
        if(a[i][j])
        return false;
    }
    for(int i=row,j=col;i<n&&j>=0;++i,--j){
        if(a[i][j])
        return false;
    }
    return true;
}
bool solvequeen(vector<vector<int>>&a,int col,int n){
    if(col>=n)return true;
    for(int i=0;i<n;i++){
        if(isafe(a,i,col,n)){
            a[i][col]=1;
            if(solvequeen(a,col+1,n))
            return true;
            
            a[i][col]=0;
        }
    }
    return false;
}
void solve(int n){
    vector<vector<int>>a(n,vector<int>(n,0));
    if(!solvequeen(a,0,n))return;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}
int main(){
    int n;cin>>n;
    solve(n);
}