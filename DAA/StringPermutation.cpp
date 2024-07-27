// You are using GCC
#include<bits/stdc++.h>
using namespace std;
/*void perm(string n,int l,int r){
    if(l==r)
    cout<<n<<endl;
    else{
        for(int i=l;i<=r;i++){
            swap(n[l],n[i]);
            perm(n,l+1,r);
            swap(n[l],n[i]);
        }
    }
}*/
void perm(string n){
    sort(n.begin(),n.end());
    do{
        cout<<n<<endl;
    }while(next_permutation(n.begin(),n.end()));
}
int main(){
    string n;
    cin>>n;
    perm(n);
}