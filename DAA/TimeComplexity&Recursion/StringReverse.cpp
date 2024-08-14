// You are using GCC
#include<iostream>
using namespace std;
string rev(string a,int n){
    if(n<0)
    return "";
    return a[n]+rev(a,n-1);
}
int main(){
    string a;
    cin>>a;
    cout<<"The reversed string is: ";
    cout<<rev(a,a.length()-1);
}