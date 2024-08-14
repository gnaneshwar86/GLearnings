// You are using GCC//SortedMatrix
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=n*n;
    int a[l];
    for(int i=0;i<l;i++)cin>>a[i];
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-i-1;j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
        if((i+1)%n==0)
        cout<<endl;
    }
}