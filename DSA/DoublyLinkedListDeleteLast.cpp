#include<iostream>
using namespace std;
struct node{
    int data;
    node* next,*prev;
}*head=NULL,*newn=NULL,*pos=NULL;
void insert_last(int n){
    newn=new node();
    newn->data=n;
    newn->next=NULL;
    newn->next=NULL;
    if(head==NULL){
        head=newn;
        pos=newn;
    }
    else{
        pos=head;
        while(pos->next!=NULL)pos=pos->next;
        pos->next=newn;
        newn->prev=pos;
    }
}
void delete_last(){
    struct node* pre;
    if(head==NULL)return;
    else{
        pos=head;
        while(pos->next!=NULL){
            pre=pos;
            pos=pos->next;
        }
        pre->next=NULL;
        delete pos;
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
    int n,val,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert_last(val);
    }
    cin>>k;
    display();
    for(int i=0;i<k;i++){
        delete_last();
    }
    cout<<endl;
    display();
}