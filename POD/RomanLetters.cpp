// You are using GCC
#include<bits/stdc++.h>
using namespace std;
string roman(int n){
    vector<int>a={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>b={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string c="";
    for(int i=0;i<13;i++){
        while(n>=a[i]){
            n-=a[i];
            c+=b[i];
        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<roman(n);
}