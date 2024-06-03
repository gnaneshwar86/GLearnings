// You are using GCC
#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
bool at(string a){
    int c=0;
    for(char i:a){
        if(i=='@')c++;
    }
    if(c==1)return true;
    else return false;
}
bool dot(string a){
    int c=0;
    for(char i:a){
        if(i=='.')c++;
    }
    if(c==1)return true;
    else return false;
}
bool dom(string a){
    vector<string>v={"in","com","net","biz"};
    for(auto i:v){
        if(a.find(i)!=string::npos)
        return true;
    }
    return false;
}
int main(){
    string a;
    getline(cin,a);
    
        if(at(a) && dot(a) && dom(a)){
            cout<<"Valid email address";
        }
        else if(!dot(a)){
            cout<<"DotException: Invalid Dot usage\nInvalid email address";
        }
        else if(!at(a)){
            cout<<"AtTheRateException: Invalid @ usage\nInvalid email address";
        }
        else if(!dom(a)){
            cout<<"DomainException: Invalid Domain\nInvalid email address";
        }
    
}