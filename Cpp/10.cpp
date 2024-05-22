#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    bool t=true;
    int c=str.length();
    for(int i=0;i<c-2;i++){
        if((str[i]!=str[i+2])){
            t=false;
            break;
        }
    }
    if(t){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}