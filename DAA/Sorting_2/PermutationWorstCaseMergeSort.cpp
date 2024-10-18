// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void join(int arr[],int left[],int right[],int l,int m,int r){
    int i;
    for(i=0;i<=m-l;i++){
        arr[i]=left[i];
    }
    for(int j=0;j<r-m;j++){
        arr[i+j]=right[j];
    }
}
void split(int arr[],int left[],int right[],int l,int m,int r){
    for(int i=0;i<=m-l;i++){
        left[i]=arr[i*2];
    }
    for(int i=0;i<r-m;i++){
        right[i]=arr[i*2+1];
    }
}   
void gwc(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        int left[m-l+1];
        int right[r-m];
        split(arr,left,right,l,m,r);
        
        gwc(left,l,m);
        gwc(right,m+1,r);
        
        join(arr,left,right,l,m,r);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    gwc(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}