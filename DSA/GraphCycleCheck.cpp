// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool cycle=false;
void DFS(list<int>l[],bool vis[],int n)
{
    vis[n]=true;
    for(int i : l[n]){
        if(!vis[i])
          DFS(l,vis,i);
        else
        {
            cycle=true;
            return;
        }
    }
    
}
int main()
{
    int v,e,s,d;
    cin>>v>>e;
    list<int>l[v];
    bool vis[v]={false};
    for(int i=0;i<e;i++){
        cin>>s>>d;
        l[s].push_back(d);
    }
    DFS(l,vis,0);
    if(cycle)
    cout<<"YES";
    else
    cout<<"NO";
}