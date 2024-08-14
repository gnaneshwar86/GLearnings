// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int count(int x,int n,int num){
    int a=(x-pow(num,n));
    if(a==0)
    return 1;
    if(a<0)
    return 0;
    return count(a,n,num+1)+count(x,n,num+1);
}
int main(){
    int n,x;
    cin>>x>>n;
    cout<<count(x,n,1);
}