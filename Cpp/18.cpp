#include<iostream>
using namespace std;
class BMI
{
 public:
 void bmi(int n,float m)
 {
    float b;
    b=n/(m*m);
    if( b < 18.5)
        cout<<"U";
    else if (18.5 <= b && b< 25.0 )
        cout<<"N";
    else if(25.0 <= b && b< 30.0)
        cout<<"H";
    else
        cout<<"O";
 }
};
int main()
{
    int n;
    cin>>n;
    float m;
    cin>>m;
    BMI t ;
    t.bmi(n,m);
 
}