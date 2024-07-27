// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    for(int i:a){
        if(i==m){
            cout<<m<<" is present";
            return 0;
        }
    }
    cout<<m<<" is not present";
}