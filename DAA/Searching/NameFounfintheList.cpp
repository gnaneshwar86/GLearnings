// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s==a[i]){
            cout<<"Name found at index "<<i;return 0;
        }
    }
            cout<<"Name not found in the list.";
}