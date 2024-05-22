#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(arr[i][j]>=18 && arr[i][j]<60){
                    c++;
                }
            }
        }
    }
    cout<<c;
}