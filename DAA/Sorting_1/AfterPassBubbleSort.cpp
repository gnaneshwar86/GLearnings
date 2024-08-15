// You are using GCC
#include<iostream>
using namespace std;
void dis(int a[],int n){
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
bool check(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"The unsorted list is :\n";
    dis(a,n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        cout<<"\nAfter Pass "<<i+1<<" elements are:";dis(a,n);
        if(check(a,n))break;
    }
    cout<<"\nThe sorted list is :\n";dis(a,n);
}