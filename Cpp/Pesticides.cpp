// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val,c=0;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>val;
        a.push_back(val);
    }
    bool k;
    do{
        k=false;
        queue<int>q;
        q.push(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                k=true;
            }
            else{
                q.push(a[i]);
            }
        }
        if(k)c++;
        n=q.size();
        for(int i=0;i<n;i++){
            a[i]=q.front();q.pop();
        }
    }while(k);
    cout<<c;
    
}