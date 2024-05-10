// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void add(vector<int>l[],int s,int d){
    l[s].push_back(d);
}
void bfs(vector<int>l[],bool vis[],int v){
    queue<int>q;
    q.push(v);
    vis[v]=true;
    while(!q.empty()){
        int c=q.front();
        q.pop();
        cout<<c<<" ";
        for(int i:l[c]){
            if(!vis[i]){
                q.push(i);
                vis[i]=true;
            }
        }
    }
    cout<<endl;
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
        bfs(l,vis,0);
    }
}