// Time Complexity : 
#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int i = start-1 ;
    int pivot =  arr[end];
    for(int j=start; j<end; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}
void quickSort(int arr[],int start,int end){
    if(end <= start)
    return;
    int pivotIndex = partition(arr, start, end);
    quickSort(arr,start,pivotIndex-1);
    quickSort(arr,pivotIndex+1,end);
}
int main(){
    int arr[] = {8, 2, 5, 3, 9, 4, 7, 6, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, len - 1);
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
}