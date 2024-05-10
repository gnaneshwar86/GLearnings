#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>s;
    string a;
    getline(cin,a);
    for(char i : a){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}