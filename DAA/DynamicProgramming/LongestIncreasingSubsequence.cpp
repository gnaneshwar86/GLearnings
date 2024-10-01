// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int lis(int a[], int n){
    int li[n];
    fill(li, li + n, 1);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < i; j++)
            if((a[i] > a[j]) && (li[i] <= li[j]))
                li[i] = li[j] + 1;
    return *max_element(li, li + n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    cout<<lis(a,n);
}