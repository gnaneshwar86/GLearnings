// You are using GCC
//RightRotations
#include<iostream>
using namespace std;
int main()
{
    int l;cin>>l;
    while(l--)
    {
        int m;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        int sum=a[0]+a[m-1];
        for(int i=0;i<m-1;i++)
        {
            if(a[i]+a[i+1]>sum)
            sum=a[i]+a[i+1];
        }
        cout<<sum<<endl;
    }
}