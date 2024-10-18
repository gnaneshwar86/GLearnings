// You are using GCC
#include<iostream>
using namespace std;
void heapify(int a[],int n,int i)
{
    int lar=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    if(l<n && a[l]<a[lar])
    {
        lar=l;
    }
    if(r<n && a[r]<a[lar])
    {
        lar=r;
    }
    if(lar!=i)
    {
      int temp=a[i];
      a[i]=a[lar];
      a[lar]=temp;
   
        heapify(a,n,lar);
    }
}
void heap(int a[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    heap(a,n);
    cout<<"After heapifying array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted array is : \n";
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]<a[j])
           {
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}