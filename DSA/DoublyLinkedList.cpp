#include<iostream>
using namespace std;
struct node{
    int data;
    node* next,*prev;
}*head=NULL,*newn=NULL,*pos=NULL;
void insert_first(int n){
    newn=new node();
    newn->data=n;
    newn->next=NULL;
    newn->next=NULL;
    if(head==NULL){
        head=newn;
        pos=newn;
    }
    else{
        newn->next=head;
        head->prev=newn;
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
void display_reverse(node* temp){
    if(temp==NULL)return;
    else{
        display_reverse(temp->next);
        cout<<temp->data<<" ";
    }
}
int main(){
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert_first(val);
    }
    cout<<"Doubly linked list forwards: ";
    display();
    cout<<"\nDoubly linked list backwards: ";
    display_reverse(head);
}