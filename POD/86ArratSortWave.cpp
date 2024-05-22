// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            cout<<a[i]<<" "<<a[i-1]<<" ";
        }
    }
    if(n%2!=0)
    {
        cout<<a[n-1]<<" ";
    }
} 