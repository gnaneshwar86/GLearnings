#include<bits/stdc++.h>
using namespace std;
void ins(vector<int>l[],int s,int d){
    l[s].push_back(d);
    l[d].push_back(s);
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
    int v,e,s,d;
    cin>>v>>e;
    vector<int>l[v];
    for(int i=0;i<e;i++){
        cin>>s>>d;
        ins(l,s,d);
    }
    display(l,v);
}