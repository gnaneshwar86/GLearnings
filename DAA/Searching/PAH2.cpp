// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n*n);
    int l=n*n;
    for(int i=0;i<l;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int p=0;
    for(int i=0;i<l;i++){
       p++;
       cout<<v[i]<<" ";
       if(p==n){
          p=0;cout<<endl;
       }
    }
}