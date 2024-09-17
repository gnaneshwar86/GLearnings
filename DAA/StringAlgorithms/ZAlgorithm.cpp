#include<iostream>
using namespace std;
void getZ(int Z[], string s){
    int n = s.length();
    int l, r, k;
    l = r = 0;
    for(int i = 1; i < n; i++){
        if( i > r){
            l = r = i;
            while(r < n && s[r - l] == s[r])
                r++;
            Z[i] = r - l ;
            r--;
        }
        else{
            k = i - l;
            if( Z[k] < r - i + 1 ){
                Z[i] = Z[k] ;
            }
            else{
                l = i ;
                while(r < n && s[r - l] == s[r])
                    r++;
                Z[i] = r - l ;
                r--;
            }
        }
    }
}
void search(string text, string pat){
    string concat = pat + "$" + text;
    int l = concat.length();
    int Z[l];
    getZ( Z, concat);
    int m = pat.length();
    for(int i = 1; i < l; i++){
        if(Z[i] == m){
            cout<<"pattern found at index "<<i - m - 1 <<endl;
        }
    }
}
int main(){
    string text = "AAABBAABABABAAB";
    string pat = "AAB";
    search(text, pat);
}