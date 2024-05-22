// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void add(vector<int>l[],int s,int d){
    l[s].push_back(d);
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
void display(vector<int>l[],int v){
    for(int i=0;i<v;i++){
        cout<<i;
        for(int j:l[i]){
            cout<<" -> "<<j;
        }cout<<endl;
    }
}
int main(){
    int v,e,s,d,a,n;
    cin>>n;
    vector<int>l[n];
    vector<int>path;
    bool vis[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a;
            if(a==1)
            add(l,i,j);
        }
    }
    //display(l,n);
    dfs(l,vis,0);
    
}