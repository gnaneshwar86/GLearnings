// You are using GCC//StringSort
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}