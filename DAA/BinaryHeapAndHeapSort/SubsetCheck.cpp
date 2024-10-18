// You are using GCC
#include<iostream>
using namespace std;
void insert(int v,int s,int a[]){
    int h=v%s;
    while(a[h]!=-1){
        h++;
        if(h>=s)
        h=0;
    }
    a[h]=v;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    a[i]=-1;
    for(int i=0;i<m;i++)
    b[i]=-1;
    int e;
    for(int i=0;i<n;i++){
        cin>>e;
        insert(e,n,a);
    }
    for(int i=0;i<m;i++){
        cin>>e;
        insert(e,m,b);
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                c++;
            }
        }
    }
    if(c==m){
        cout<<"Subset";
    }
    else{
        cout<<"Not a subset";
    }
    
}