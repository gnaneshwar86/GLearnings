#include <bits/stdc++.h>
using namespace std;

int fun1(int a,int b){
    return a+b;
}
int fun1(int a,int b,int c){
    return a*b*c;
}
int main(){
    int n;
    cin>>n;
    if(n==2){
        int a,b;
        cin>>a>>b;
        cout<<fun1(a,b)<<endl;
    }
    else if(n==3){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<fun1(a,b,c)<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
}