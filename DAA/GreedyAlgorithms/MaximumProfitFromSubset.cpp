// You are using GCC
//MaximumProductFromSubset
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans=1;
    vector<int> neg;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0) ans*=arr[i];
        if(arr[i]<0) neg.push_back(arr[i]);
    }
    sort(neg.begin(),neg.end());
    int si=neg.size();

    for(int i=0;i<si;i+=2)
    {
        if(i+1<si) ans=ans*neg[i]*neg[i+1];     
    }
    cout<<ans;
}