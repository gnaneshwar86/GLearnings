#include<iostream>
using namespace std;
#define q 101 
#define d 256 
void search( string text, string pat){
    int n = text.length();
    int m = pat.length();
    int i, j ;
    int p = 0;
    int t = 0;
    int h = 1;
    for(i = 0; i < m - 1; i++)
        {h = ( h * d ) % q;
        cout<<h<<endl;}
}
int main(){
    string text = "AAABBAABABABAAB";
    string pat = "AAB";
    search(text, pat);
}