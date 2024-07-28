// You are using GCC
#include<iostream>
using namespace std;
void ismultiple(int n){
    if(n%10==0){
        cout<<"Multiple of 10";
    }else
        cout<<"Not a multiple of 10";
}
void iseven(int n){
    if(n%2==0){
        cout<<n<<" is Even number\n";
        ismultiple(n);
    }else
        cout<<n<<" is Not even\n";
}
int main(){
    int n;
    cin>>n;
    iseven(n);
}