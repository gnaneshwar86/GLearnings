#include<iostream>
#include<queue>
using namespace std;
int policeThief(char a[], int n, int k){
    int res = 0;
    queue<int> thief;
    queue<int> police;
    for(int i=0; i<n; i++){
        if(a[i] == 'T'){
            thief.push(i);
        }
        else{
            police.push(i);
        }
    }
    int l = 0, r = 0;
    while( !thief.empty() && !police.empty()){
        if( abs( thief.front() - police.front() ) <= k){
            res++;
            thief.pop();
            police.pop();
        }
    }
    return res;
}
int main(){
    int n = 6;
    char a[] = { 'T', 'T', 'P', 'P', 'T', 'P' };
    int k = 2;
    cout<<policeThief( a, n, k);
}