#include <bits/stdc++.h>
using namespace std;

void show(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting : ";
    show(arr,n);
    cout<<endl;
    sort(arr,arr+n);
    cout<<"After Sorting : ";
    show(arr,n);
}