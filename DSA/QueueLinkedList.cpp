#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*top=NULL,*rear=NULL,*newn=NULL,*pos=NULL;
void push(int n){
    newn=new node();
    newn->data=n;
    newn->next=NULL;
    if(top==NULL){
        top=newn;
        rear=newn;
    }
    else{
        rear->next=newn;
        rear=newn;
    }
}
void pop(){
    if(top==NULL)return;
    else{
        pos=top;
        top=pos->next;
        delete pos;
    }
}
void display_rear(){
    pos=top;
    while(pos->next!=NULL){
        pos=pos->next;
    }
    cout<<pos->data<<endl;
}
int main(){
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        push(val);
    }
    cout<<top->data<<endl;
    display_rear();
    pop();
    cout<<top->data<<endl;
    display_rear();
}