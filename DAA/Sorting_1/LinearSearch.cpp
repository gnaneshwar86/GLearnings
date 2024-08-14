// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n],c;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>c;
    for(int i=0;i<n;i++){
        if(a[i]==c){
            cout<<"Name found at index "<<i;
            return 0;
        }
    }
    cout<<"Name not found in the list. ";
}