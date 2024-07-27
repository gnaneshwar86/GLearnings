// You are using GCC
#include<iostream>
using namespace std;
void ser(int n){
    if(n==0)
    return;
    ser(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    ser(n);
}