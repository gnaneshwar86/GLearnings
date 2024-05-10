#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int freq[26]={0};
    for(char i:a){
        char c=tolower(i);
        int ind=c%97;
        freq[ind]++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cout<<char(i+97)<<" - "<<freq[i]<<endl;
        }
    }
}