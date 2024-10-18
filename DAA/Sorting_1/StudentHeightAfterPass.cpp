// You are using GCC
// You are using GCC
#include<iostream>
using namespace std;
bool check(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Student's height order before sorting: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
            swap(a[j],a[i]);}
            if(a[i]==a[j])
            continue;
        }
        
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        if(check(a,n))
        break;
    }
    cout<<"Student's height order after sorting: \n";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
}