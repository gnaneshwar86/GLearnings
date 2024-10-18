// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int DO(int a[],int n){
    int r[n];
    int c=0;
    for(int i=0;i<n;i++){
        int k=i;
        int min=100;
        for(int j=0;j<n;j++){
            if(min>a[j]){
                min=a[j];
                k=j;
            }
        }
        r[k]=c;
        c++;
        a[k]=1000;
    }
    for(int i=0;i<n;i++)
    cout<<r[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n],vis[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    DO(a,n);
    
}
