// You are using GCC//SortIndexDisplay
#include<bits/stdc++.h>
using namespace std;
struct node{
    int e,in;
};
int main(){
    int n;
    cin>>n;
    node ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].e;
        ar[i].in=i;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j].e>ar[j+1].e)
            swap(ar[j],ar[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i].in<<" ";
    }
}