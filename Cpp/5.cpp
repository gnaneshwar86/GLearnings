#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual int fun(int x)=0;
};
class child : public Parent{
    public:
    int fun(int x){
        if(x%2==0){
            return (x*x*x)+(x*x);
        }
        else{
            return (x*x*x)-(x*x);

        }
    }
};
int main(){
    child c;
    int n;
    cin>>n;
    cout<<c.fun(n);
}