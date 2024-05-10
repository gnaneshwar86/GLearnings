// You are using GCC
#include<iostream>
using namespace std;
void ins(int h[],int s,int n){
    int f=n%s;
    int i=f;
    int c=0;
    while(h[i]!=-1){
        c++;
        i=(n+c)%s;
    }
    h[i]=n;
}
int main(){
    int s,n;
    cin>>s;
    int h[s];
    for(int i=0;i<s;i++)h[i]=-1;
    for(int i=0;i<s;i++){
        cin>>n;
        ins(h,s,n);
    }
    for(int i=0;i<s;i++){
        cout<<h[i]<<" ";
    }
}