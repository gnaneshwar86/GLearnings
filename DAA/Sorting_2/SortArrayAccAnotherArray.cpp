// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        mpp[arr1[i]]++;
    }
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    
    vector<int> ans;
    for(int i=0;i<m;i++){
        while(mpp[arr2[i]]>0){
            ans.push_back(arr2[i]);
            mpp[arr2[i]]--;
        }
    }
    for(auto it:mpp){
        while(it.second>0){
            ans.push_back(it.first);
            it.second--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}