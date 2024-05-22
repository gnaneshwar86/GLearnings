#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:     
    void fun(int n){
        int arr[n];
        int num=n;
        int c=0;int p=0;
        while(num>0){
            arr[p]=num%10;
            num/=10;
            c++;
            p++;
        }
        int sum=0;
        for(int i=0;i<c;i++){
            for(int j=i+1;j<c;j++){
                sum+=arr[i]+arr[j];
            }
        }
        cout<<sum;
    }
};
int main(){
    int n;
    cin>>n;
    Parent in;
    in.fun(n);
}