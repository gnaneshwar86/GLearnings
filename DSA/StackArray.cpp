#include<iostream>
#define max 50
using namespace std;
int stack[max],top=-1;
void push(int val){
    if(top==max-1)return;
    else{
        top++;
        stack[top] = val;
    }
}
void display(){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<endl;
    }
}
int main(){
    int n,val;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>val;
        push(val);
    }
    cout<<"Stack elements\n";
    display();
}