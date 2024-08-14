// You are using GCC
#include<iostream>
using namespace std;
int find(int a[],int m,int n){
    for(int i=0;i<n;i++){
        if(a[i]==m){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    if(find(a,m,n)){
        cout<<" The ticket number "<<m<<" is found at position "<<find(a,m,n);
        cout<<"Congratulations!You have won the lottery";
    }
    else{
        cout<<"Sorry the ticket number "<<m<<" is not there.Better luck next time!";
    }
}