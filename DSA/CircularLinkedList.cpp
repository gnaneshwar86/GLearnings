#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*head=NULL,*newn=NULL,*pos=NULL;
void insert_first(int n){
    newn=new node();
    newn->data=n;
    newn->next=NULL;
    if(head==NULL){
        head=newn;
        newn->next=head;
    }
    else{
        pos=head;
        while(pos->next!=head)pos=pos->next;
        pos->next=newn;
        newn->next=head;
        head=newn;
    }
}
display(){
    cout<<head->data<<" ";
    pos=head->next;
    while(pos!=head){
        cout<<pos->data<<" ";
        pos=pos->next;
    }cout<<endl;
}
int main(){
    int n,val,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert_first(val);
    }
    cin>>k;
    display();
    insert_first(k);
    display();
}