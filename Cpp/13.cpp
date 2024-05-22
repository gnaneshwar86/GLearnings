#include <bits/stdc++.h>
using namespace std;

struct time{
    int h, m, s;
    int hh,mm,ss;
};
int main(){
    struct time t;
    cin>>t.h>>t.m>>t.s;
    cin>>t.hh>>t.mm>>t.ss;
    ofstream out("samp.txt");
    out<<t.h<<" "<<t.m<<" "<<t.s<<" "<<endl;
    out<<t.hh<<" "<<t.mm<<" "<<t.ss<<" "<<endl;
    out.close();

    ifstream in("samp.txt");
    in>>t.h>>t.m>>t.s;
    in>>t.hh>>t.mm>>t.ss;

    int a= (t.h*3600) + (t.m*60) + (t.s);
    int b= (t.hh*3600) + (t.mm*60) + (t.ss);
    int res=a-b;
    
    int h=res/3600;
    int p=res%3600;
    int m=p/60;
    int s=p%60;

    cout<<h<<":"<<m<<":"<<s;
    in.close();

}