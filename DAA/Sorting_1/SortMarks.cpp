// You are using GCC//SortMarks
#include<bits/stdc++.h>
using namespace std;
struct node{
    int roll;
    string name;
    int a,b,c,tot;
    float avg;
};
int main(){
    int n;
    cin>>n;
    node ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].roll>>ar[i].name>>ar[i].a>>ar[i].b>>ar[i].c;
        ar[i].tot=ar[i].a+ar[i].b+ar[i].c;
        ar[i].avg=ar[i].tot/3.0;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j].tot<ar[j+1].tot)
            swap(ar[j],ar[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i].roll<<"\t"<<ar[i].name<<"\t"<<ar[i].tot<<"\t";
        cout<<fixed<<setprecision(2)<<ar[i].avg<<endl;
    }
}