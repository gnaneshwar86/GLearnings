#include<bits/stdc++.h>
using namespace std;
int pre(char c){
    if(c=='^')
    return 5;
    else if(c=='*'||c=='/')
    return 4;
    else if(c=='+'||c=='-')
    return 3;
    else 
    return -1;
}
string postfix(string a){
    string p=""; 
    stack<char>s; 
    for(char i:a){ 
        if(isalnum(i))
        p+=i;
        else if(i=='('){ 
            s.push(i); 
        } 
        else if(i==')'){ 
            while(s.top()!='('){ 
                p+=s.top(); 
                s.pop(); 
            } 
            s.pop(); 
        } 
        else{ 
            while(!s.empty() && pre(i)<=pre(s.top()) ){ 
                p+=s.top(); 
                s.pop(); 
            } 
            s.push(i); 
        } 
    } 
    while(!s.empty()){ 
        p+=s.top(); 
        s.pop(); 
    } 
    return p; 

}
int main(){
    string a;
    getline(cin,a);
    cout<<postfix(a);
}