#include <bits/stdc++.h>
using namespace std;

class currentbill{
    public:
    virtual double amount()=0;
};
class fan : public currentbill{
    public:
    float watts,hours;
    fan(){
        cin>>watts>>hours;
    }
    double amount(){
        return ((watts*hours)/1000)*1.5;
    }
};
class Light : public currentbill{
    public:
    float watts,hours;
    Light(){
        cin>>watts>>hours;
    }
    double amount(){
        return ((watts*hours)/1000)*1.5;
    }
};
class TV : public currentbill{
    public:
    float watts,hours;
    TV(){
        cin>>watts>>hours;
    }
    double amount(){
        return ((watts*hours)/1000)*1.5;
    }
};
int main(){
    fan f;
    Light l;
    TV t;

    cout<<f.amount()+l.amount()+t.amount();
}