//CarnivalActivity
#include<iostream>
using namespace std;
struct activity
{
    int s;
    int f;
    int fs;
};
int main()
{
    int n;
    cin>>n;
    activity a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].s>>a[i].f>>a[i].fs;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].f>a[j+1].f)
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    int sum=0;
    int i=0;
    sum+=a[0].fs;
    for(int j=1;j<n;j++)
    {
        if(a[j].s>=a[i].f)
        {
            sum+=a[j].fs;
            i=j;
        }
    }
    cout<<sum;
}