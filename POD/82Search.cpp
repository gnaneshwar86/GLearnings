// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void search(int a[],int k,int n){
    int c=0,in;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            c++;
            if(c==2)
            in=i;
        }
    }
    if(c==0)
    cout<<"Key not found.";
    else if(c==1)
    cout<<"Key found only once.";
    else
    cout<<"The index of the second occurrence of the key value is: "<<in;
}
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    search(a,k,n);
}