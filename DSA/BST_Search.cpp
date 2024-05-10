#include<iostream>
using namespace std;
struct node{
    int d;
    node* l,*r;
}*root=NULL,*newn=NULL;
node* insert(node* root,int n){
    if(root==NULL){
        newn=new node();
        newn->d=n;
        newn->l=NULL;
        newn->r=NULL;
        return newn;
    }
    else{
        if(n<root->d)
        root->l=insert(root->l,n);
        else
        root->r=insert(root->r,n);
    }return root;
}
bool search(node*temp,int n){
    while(temp!=NULL){
        if(n==temp->d)
        return true;
        if(n<temp->d)
        temp=temp->l;
        else
        temp=temp->r;
    }
    return false;
}
int main(){
    int n,a;
    do{
        cin>>n;
        if(n<1)break;
        root=insert(root,n);
    }while(1);
    cin>>a;
    if(search(root,a)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}