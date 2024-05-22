#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    map<int,int>p;
    for(int i=0;i<n;i++){
        p[a[i]]++;
    }
    for(int i=0;i<k;i++){
        int max=0,t=0;
        for(auto &i:p){
            if(i.second>max){
                max=i.second;
                t=i.first;
            }
        }
        cout<<t<<" ";
        p.erase(t);
    }
}