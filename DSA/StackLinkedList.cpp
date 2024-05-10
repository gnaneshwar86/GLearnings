#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*top=NULL,*newn=NULL,*pos=NULL;
void push(int n){
    newn=new node();
    newn->data=n;
    newn->next=NULL;
    if(top==NULL){
        top=newn;
        pos=newn;
    }
    else{
        newn->next=top;
        top=newn;
    }
}
void display(){
    pos=top;
    cout<<"Stack elements \n";
    while(pos!=NULL){
        cout<<pos->data<<endl;
        pos=pos->next;
    }
}
int main(){
    int n;
    char c;
    do{
        cin>>n>>c;
        push(n);
        if(c=='N')break;
    }while(1);
    display();
}