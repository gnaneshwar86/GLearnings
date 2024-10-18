// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k;cin>>k;
    for(int i=0;i<n;i++){
        if(k==a[i]){
            cout<<"Element is present in the array at position "<<i+1;return 0;
        }
    }
            cout<<"Element is not present in the array";return 0;
    
}