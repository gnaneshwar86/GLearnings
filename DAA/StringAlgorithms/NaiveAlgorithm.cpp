#include<iostream>
using namespace std;
void search(string text, string pat){
    int n = text.length();
    int m = pat.length();
    for(int i = 0; i <= n - m ; i++){
        int j = 0;
        for( ; j < m; j++){
            if(text[i + j] != pat[j]){
                break;
            }
        }
        if(j == m){
            cout<<"Pattern found at index "<<i<<endl;

        }
    }
}
int main(){
    string text = "AAABBAABABABAAB";
    string pat = "AAB";
    search(text, pat);
}