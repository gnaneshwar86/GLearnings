// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct node{
    float w;
    float p;
    float r;
};
bool com(node a,node b){
    return a.r>b.r;
}
int main(){
    int n;
    cin>>n;
    node k[n];
    for(int i=0;i<n;i++){
        float a,b;
        cin>>a>>b;
        k[i].w=a;
        k[i].p=b;
        k[i].r=b/a;
    }
    int c;
    cin>>c;
    sort(k,k+n,com);
    cout<<endl;
    float profit=0;
    for(int i=0;i<n;i++){
        if(k[i].w<=c){
        profit+=k[i].p;
        c-=k[i].w;
        }
        else{
            profit+=c*k[i].r;
            break;
        }
    }
    cout<<"Maximum profit is:- "<<fixed<<setprecision(2)<<profit;
    
}