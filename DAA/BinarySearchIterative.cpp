// You are using GCC
#include<iostream>
using namespace std;
int bin(int a[],int n,int k){
    int l=0,r=n-1,m=(n-1)/2;
    while(l<=r){
        if(a[m]==k)
        return m;
        else if(k<a[m])
        r=m-1;
        else if(k>a[m])
        l=m+1;
        m=(l+r)/2;
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    if(bin(a,n,k)!=-1){
        cout<<bin(a,n,k);
    }
    else
    cout<<"NO OCCURRENCES";
}