// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k;cin>>k;
    for(int i=0;i<n;i++){
        if(k==a[i]){
            cout<<" The ticket number "<<a[i]<<" is found at position "<<1+i<<endl;
            cout<<"Congratulations!You have won the lottery";return 0;
        }
    }
    cout<<"Sorry the ticket number "<<k<<" is not there.Better luck next time!";
    
}