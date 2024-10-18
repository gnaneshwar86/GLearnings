#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int root=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left<n && arr[left]<arr[root]){
        root=left;
    }
    if(right<n && arr[right]<arr[root]){
        root=right;
    }
    if(root!=i){
        swap(arr[root],arr[i]);
        heapify(arr,n,root);
    }
}
void heap(int arr[],int n){
    for(int i=n/2;i>=0;i--)
    heapify(arr,n,i);
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){cin>>a[i];cout<<a[i]<<" ";}
    cout<<endl<<"Min heap: ";
    heap(a,n);
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}