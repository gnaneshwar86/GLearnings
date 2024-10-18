// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Student's height order before sorting:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        cout<<"Height order of students after iteration "<<i+1<<endl;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"After final comparison of all students , the height order becomes:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}