#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    string* ptr=arr;
    for(int i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    sort(ptr,(ptr+n));
    for(int i=0;i<n;i++) {
        cout <<i+1<<" "<< *(ptr+i) << endl;
    }
}