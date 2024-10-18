// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++)
    cin>>a[i];
    int key;cin>>key;
    
    for(int i=0;i<4;i++){
        if(a[i]==key){
            cout<<"Yes";return 0;
        }
    }
    cout<<"No";
}