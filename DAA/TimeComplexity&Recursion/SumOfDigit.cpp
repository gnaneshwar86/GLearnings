// You are using GCC
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    return n%10+sum(n/10);
}
int main(){
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        cout<<sum(a)<<" ";
    }
}