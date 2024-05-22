#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    bool t=true;
    if(a.length()==b.length()){
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                if(a[i]!='?' && b[i]!='?'){
                    t=false;
                    break;
                }
            }
        }
        if(t) {
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }
}