#include <bits/stdc++.h>
using namespace std;

int find(int n){

    int k=1;
    for(int i=1;i<n;i++){
        if((i*(i+1)/2)==n){
            break;
        }
        if((i*(i+1)/2)>n){
            k=0;
            break;
        }
        
    }
    return k;    

}
int main(){
    int n;
    cin>>n;
    if(find(n)){
        cout<<"We can create Right Triagle of dots with "<<n<<" dots";
    }
    else{
        cout<<"We can't create Right Triagle of dots with "<<n<<" dots";
    }
    return 0;
}