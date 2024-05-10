// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int c=0;
vector<int>l[100];
int vis[100]={0};
void add(int s,int d){
    l[s].push_back(d);
    l[d].push_back(s);
}
void dis(int a){
    vis[a]=1;
    c++;
    for(int i=0;i<l[a].size();i++){
        if(vis[l[a][i]]==0){
            
            dis(l[a][i]);
        }
    }
}
int main(){
    int v,e,s,d,a;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        cin>>s>>d;
        add(s,d);
    }
    cin>>a;
    dis(a);
    cout<<v-c;
}