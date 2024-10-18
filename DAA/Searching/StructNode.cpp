// You are using GCC
#include<bits/stdc++.h> 
using namespace std; 
struct node{
    int c,v,in;
};
bool com(node a,node b){
    if(a.c!=b.c)
    return a.c>=b.c;
    return a.in<b.in;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    unordered_map<int,pair<int,int>>o;
    for(int i=0;i<n;i++){
        cin>>a[i];
        o[a[i]].first++;
        o[a[i]].second=i;
    }
    int l=o.size();
    struct node e[l];
    int j=0;
    for(auto i:o){
        e[j].v=i.first;
        e[j].c=i.second.first;
        e[j].in=i.second.second;j++;
    }
    sort(e,e+l,com);
    for(auto i:e){
        for(int j=0;j<i.c;j++){
            cout<<i.v<<" ";
        }
    }
    
    
}