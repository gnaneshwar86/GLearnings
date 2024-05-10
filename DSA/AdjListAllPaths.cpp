// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void add(vector<int>l[],int s,int d){
    l[s].push_back(d);
}
void dfs(vector<int>l[],bool vis[],int s,int d,vector<int>path){
    if(s==d){
        for(int i:path){
            cout<<i<<" ";
        }cout<<endl;
    }
    else{
        vis[s]=true;
        for(int i:l[s]){
            if(!vis[i]){
                path.push_back(i);
                dfs(l,vis,i,d,path);
                path.pop_back();
            }
        }
    }
    vis[s]=false;
}
int main(){
    int v,e,s,d;cin>>v>>e;
    vector<int>l[v];
    vector<int>path;
    bool vis[v];
    for(int i=0;i<e;i++){
        cin>>s>>d;
        add(l,s,d);
    }
    cin>>s>>d;
    path.push_back(s);
    dfs(l,vis,s,d,path);
    
}