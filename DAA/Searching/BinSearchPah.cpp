// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6];
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    sort(a,a+6);
    int l=0,r=5;
    int key;
    cin>>key;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==key){
        cout<<mid;return 0;}
        else if(key>a[mid])
        l=mid+1;
        else if(key<a[mid])
        r=mid-1;
    }
    cout<<-1;
}