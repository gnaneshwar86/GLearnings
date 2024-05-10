// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void add(vector<int>l[],int s,int d){
    l[s].push_back(d);
    l[d].push_back(s);
}
void dfs(vector<int>l[],bool vis[],int v){
    vis[v]=true;
    cout<<v<<" ";
    for(int i:l[v]){
        if(!vis[i]){
            dfs(l,vis,i);
        }
    }
}
int main(){
    int n;cin>>n;
    while(n--){
        int v,e,s,d;cin>>v>>e;
        vector<int>l[v];
        bool vis[v];
        for(int i=0;i<e;i++){
            cin>>s>>d;
            add(l,s,d);
        }
        dfs(l,vis,0);
    }
}