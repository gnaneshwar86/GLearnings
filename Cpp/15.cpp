#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a,b;
    cin>>a>>b;
    try{
        if(a>=n){
            throw runtime_error("Index out of bounds");
        }
        arr[a]=b;
    }
    catch (const exception& e) {
        cout<<e.what()<<endl;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}