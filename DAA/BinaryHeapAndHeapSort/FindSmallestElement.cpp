// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&a,int k){
    priority_queue<int,vector<int>,greater<int>>g;
    int n=a.size();
    for(int i=0;i<n;i++){
        g.push(a[i]);
    }
    while((--k)>0)
    g.pop();
    cout<<g.top()<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;cin>>k;
    find(v,k);
}