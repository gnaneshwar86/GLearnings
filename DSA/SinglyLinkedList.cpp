#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*head=NULL,*newn=NULL,*pos=NULL;
void insert_last(int n){
    newn=new node();
    newn->data=n;
    newn->next=NULL;
    if(head==NULL){
        head=newn;
        pos=newn;
    }
    else{
        pos=head;
        while(pos->next!=NULL)pos=pos->next;
        pos->next=newn;
    }
}
void insert_first(int n){
    newn=new node();
    newn->data=n;
    newn->next=NULL;
    if(head==NULL){
        head=newn;
        pos=newn;
    }
    else{
        newn->next=head;
        head=newn;
    }
}
void display(){
    pos=head;
    while(pos!=NULL){
        cout<<pos->data<<" ";
        pos=pos->next;
    }
}
int main(){
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert_first(val);
    }
    display();
}