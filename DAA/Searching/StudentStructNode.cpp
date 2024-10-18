// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct stu{
    int id;
    string name;
    int total;
    float avg;
};
bool compare(stu a,stu b){
    return a.avg>b.avg;
}
int main(){
    int n;
    cin>>n;
    struct stu s[n];
    int a,m1,m2,m3;
    string ss;
    for(int i=0;i<n;i++){
        cin>>a>>ss>>m1>>m2>>m3;
        float tot=m1+m2+m3;
        float av=tot/3;
        s[i].name=ss;
        s[i].id=i+1;
        s[i].total=tot;
        s[i].avg=av;
    }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++){
        cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].total<<" "<<fixed<<setprecision(2)<<s[i].avg<<endl;
    }
}