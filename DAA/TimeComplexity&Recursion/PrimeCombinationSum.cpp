// You are using GCC
#include<iostream>
using namespace std;
bool pri(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
void dis(int n){
    for(int i=n-1;i>1;i--){
        if(pri(i)){
            for(int j=2;j<n;j++){
                if(i+j==n){
                cout<<n<<" = "<<i<<" + "<<j<<endl;
                return;}
            }
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i+=2){
        dis(i);
    }
}