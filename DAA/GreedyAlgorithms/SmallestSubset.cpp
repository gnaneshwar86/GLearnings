// You are using GCC
//SmallestSubset
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int tot=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tot+=arr[i];
    }
    sort(arr,arr+n);
    
    int sum=0;
    int i;
    for(i=n-1;i>=0;i--){
        if(sum>tot) break;
        sum+=arr[i];
        tot-=arr[i];
    }
    cout<<n-i-1;
    
}