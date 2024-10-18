// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int hashfun(int e,int s){
    return e%s;
}
void insert(int e,int s,int table[]){
    int k=hashfun(e,s);
    while(table[k]!=-1){
        k++;
        if(k>=s)
        k=0;
    }
    table[k]=e;
}
int main(){
    int n;
    cin>>n;
    int e,table[n];
    for(int i=0;i<n;i++)
    table[i]=-1;
    for(int i=0;i<n;i++){
        cin>>e;
        insert(e,n,table);
    }
    for(int i=0;i<n;i++){
        if(table[i]!=-1)
        cout<<table[i]<<" ";
    }
}