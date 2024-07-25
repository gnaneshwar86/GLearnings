// You are using GCC
#include<iostream>
#include<algorithm>
using namespace std;
int bin(int a[],int l,int h,int k){
    if(l<=h){
        int m=(l+h)/2;
        if(a[m]==k)
            return m;
        else if(a[m]>k)
            return bin(a,l,m-1,k);
        else if(a[m]<k)
            return bin(a,m+1,h,k);
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    sort(a,a+n);
    int m=bin(a,0,n-1,k);
    if(m!=-1)
    cout<<"Key found";
    else
    cout<<"Key not found";
}