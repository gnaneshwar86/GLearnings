// You are using GCC
#include<iostream>
using namespace std;
void ins(int h[],int s,int n){
    int f=n%s;
    int i=f;
    int c=0;
    while(h[i]!=-1){
        c++;
        i=(f+(c*c))%s;
    }
    h[i]=n;
}
int main(){
    int a,b,n,c=0;
    cin>>a>>b;
    int h[a];
    for(int i=0;i<a;i++)h[i]=-1;
    for(int i=0;i<a;i++){
        cin>>n;
        ins(h,a,n);
    }
    for(int i=0;i<b;i++){
        cin>>n;
        for(int j=0;j<a;j++){
            if(h[j]==n)c++;
        }
    }
    if(c==b)cout<<"Subset";
    else cout<<"Not a subset";
}