// You are using GCC??MinSwapSort
#include<iostream>
using namespace std;
void minswap(int a[],int n,int k){
    for(int i=0;i<n-1 && k>0;i++){
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(j-i>k)
            break;
            if(a[j]<a[pos])
            pos=j;
        }
        for(int j=pos;j>i;j--)
        swap(a[j],a[j-1]);
        k-=pos-i;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    minswap(a,n,k);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}