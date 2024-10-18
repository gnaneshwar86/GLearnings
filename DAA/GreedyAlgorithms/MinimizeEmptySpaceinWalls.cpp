//MinimizeEmptySpaceinWalls
#include<iostream>
using namespace std;
int main()
{
    int lw;
    cin>>lw;
    int l1,l2;
    cin>>l1>>l2;
    int p=0,q=0,rem=0;
    int num_m=0;
    int num_n=0;
    int emp=lw;
    while(lw>=l2)
    {
        q+=1;
        lw=lw-l2;
        p=lw/l1;
        rem=lw%l1;
        if(rem<=emp)
        {
            num_m=p;
            num_n=q;
            emp=rem;
        }
    }
    cout<<num_m<<" "<<num_n<<" "<<emp;
}