// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n)
    cout<<n<<" is a perfect number";
    else
    cout<<n<<" is not a perfect number";
}