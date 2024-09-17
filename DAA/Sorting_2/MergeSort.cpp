// Time Complexity : O(nlogn)
#include<bits/stdc++.h>
using namespace std;
void merge(int leftArr[],int leftLength,int rightArr[],int rightLength,int arr[]){
    int i=0,l=0,r=0;
    while(l<leftLength && r<rightLength){
        if(leftArr[l]<rightArr[r]){
            arr[i++]=leftArr[l++];
        }
        else{
            arr[i++]=rightArr[r++];
        }
    }
    while(l<leftLength){
        arr[i++]=leftArr[l++];
    }
    while(r<rightLength){
        arr[i++]=rightArr[r++];
    }
}
void mergeSort(int arr[],int len){
    if(len<=1)return;
    int mid=len/2;
    int leftArr[mid];
    int rightArr[len-mid];
    for (int i = 0; i < mid; i++) {
        leftArr[i] = arr[i];
    }
    for (int i = mid; i < len; i++) {
        rightArr[i - mid] = arr[i];
    }
    mergeSort(leftArr,mid);
    mergeSort(rightArr,len-mid);
    merge(leftArr,mid,rightArr,len-mid,arr);
}
int main(){
    int arr[]={8,5,2,1,7,6,3,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}