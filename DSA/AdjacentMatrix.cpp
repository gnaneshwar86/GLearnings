// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e,s,d,w;
    string a;
    cin>>v>>e>>a;
    int ad[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            ad[i][j]=0;
        }
    }
    if(a=="yes"){
        for(int i=0;i<e;i++){
            cin>>s>>d>>w;
            ad[s-1][d-1]=w;
        }
    }
    else{
        for(int i=0;i<e;i++){
            cin>>s>>d>>w;
            ad[s-1][d-1]=w;
            ad[d-1][s-1]=w;
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<ad[i][j]<<" ";
        }cout<<endl;
    }
}