#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
    char arr[4];
    int sum=0;
    virtual void game()=0;
};
class Derived : public Base{
    public:
    Derived(){
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
    }
    void game(){
        for(int i=0;i<4;i++){
            if(isupper(arr[i])){
                sum+=10;
            }
            else if(islower(arr[i])){
                sum-=5;
            }
        }
        cout<<sum;
    }
};
int main(){
    Derived d;
    d.game();
}