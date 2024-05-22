#include <bits/stdc++.h>
using namespace std;

class MyCalculator{
    public:
    long power(int n,int p){
        if(n<0 || p<0){
            throw runtime_error("n and p should be non-negative");
        }
        else if(n==0 && p==0){
            throw runtime_error("n and p should not be zero");
        }
        return pow(n,p);
    }
};
int main(){
    MyCalculator c;
    int a,b;
    cin>>a>>b;
    try{
        cout<<c.power(a,b);
    }
    catch(const exception &e){
        cout<<e.what()<<endl;
    }
}