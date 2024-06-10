// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a[100],k=0;
    while(cin>>a[k]){
        k++;
    }
    int b[k/2];
    for(int i=0;i<k/2;i++){
        b[a[i+k/2]]=a[i];
    }
    cout<<"[";
    for(int i=0;i<k/2;i++){
        cout<<b[i];
        if(i<k/2-1)
        cout<<", ";
    }
    cout<<"]";
}