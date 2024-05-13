// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool fill(int res[],int c,int n){
    if(c==0)return true;
    for(int i=0;i<2*n-c-1;i++){
        if(res[i]==0 && res[i+c+1]==0){
            res[i]=res[i+c+1]=c;
            if(fill(res,c-1,n))
            return true;
            res[i]=res[i+c+1]=0;
        }
    }return false;
}
int main(){
    int n;
    cin>>n;
    int res[2*n];
    for(int i=0;i<2*n;i++)res[i]=0;
    if(fill(res,n,n)){
        for(int i=0;i<2*n;i++)
        cout<<res[i]<<" ";
    }
    else
    cout<<"Not Possible";
}