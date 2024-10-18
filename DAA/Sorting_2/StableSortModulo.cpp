// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool mycomp(int& a,int &b){
    return a<b;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stable_sort(arr,arr+n,[k](int a,int b){
      return a%k<b%k;  
    });
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}