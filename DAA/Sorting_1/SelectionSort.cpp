// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int d,m,y;
};
int main(){
    int n;
    cin>>n;
    node a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].d>>a[i].m>>a[i].y;
    }
    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i+1;j<n;j++){
            if(a[k].y>a[j].y)
            k=j;
            else if(a[k].y==a[j].y && a[k].m>a[j].m)
            k=j;
            else if(a[k].y==a[j].y && a[k].m==a[j].m && a[k].d>a[j].d)
            k=j;
        }
        swap(a[i],a[k]);
    }
    for(int i=0;i<n;i++)
    cout<<a[i].d<<" "<<a[i].m<<" "<<a[i].y<<endl;
}