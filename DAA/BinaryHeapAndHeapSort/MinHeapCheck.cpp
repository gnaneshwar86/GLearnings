// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool heapify(int arr[],int n,int i){
    int root=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left<n && arr[left]<arr[root]){
        return false;
    }
    if(right<n && arr[right]<arr[root]){
        return false;
    }
    return true;
    
}
void heap(int arr[],int n){
    for(int i=n/2;i>=0;i--){
        if(!heapify(arr,n,i)){
            cout<<"\nGiven array is not a min heap";return;
        }
    }
    cout<<"\nGiven array is a min heap";return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];cout<<a[i]<<" ";}
    heap(a,n);
}