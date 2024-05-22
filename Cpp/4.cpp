#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        switch(arr[i]){
            case 1:
            c1++;
            break;
            case 2:
            c2++;
            break;
            case 3:
            c3++;
            break;
            default:
            cout<<"Invalid Input";
            return 0;
        }
    }
    int c=max(max(c1,c2),c3);
    if(c==c1){
        cout<<"1";
    }
    else if(c==c2){
        cout<<"2";
    }
    else if(c==c3){
        cout<<"3";
    }
}