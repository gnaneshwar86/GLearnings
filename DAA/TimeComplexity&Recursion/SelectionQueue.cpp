// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int que(int n){
    if(n<=1)
    return 1;
    return 2*que(floor(n/2));
}
int main(){
    int n;
    cin>>n;
    cout<<que(n);
}