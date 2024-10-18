// You are using GCC
#include<iostream>
using namespace std;
void insertion_sort1(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void insertion_sort2(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int odd[n];
    int even[n];
    int ec=0,oc=0;
    for(int i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            even[ec]=arr[i];
            ec++;
        }
        else
        {
            odd[oc]=arr[i];
            oc++;
        }
    }
    insertion_sort1(ec,even);
    insertion_sort2(oc,odd);
    int eci=0,oci=0;
    for(int i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            cout<<even[eci]<<" ";
            eci++;
        }
        else
        {
            cout<<odd[oci]<<" ";
            oci++;
        }
    }
}
