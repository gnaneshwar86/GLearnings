#include<iostream>
using namespace std;
struct node{
    int d;
    node *l,*r;
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
node* minnode(node* temp){
    while(temp->l!=NULL){
        temp=temp->l;
    }
    return temp;
}
node* delnode(node* root,int n){
    struct node* temp;
    if(root==NULL)return NULL;
    if(n<root->d)
    root->l=delnode(root->l,n);
    else if(n>root->d)
    root->r=delnode(root->r,n);
    else{
        if(root->l==NULL && root->r==NULL){
            return NULL;
        }
        else if(root->l==NULL){
            temp=root->r;
            delete root;
            return temp;
        }
        else if(root->r==NULL){
            temp=root->l;
            delete root;
            return temp;
        }
        else{
            temp=minnode(root->r);
            root->d=temp->d;
            root->r=delnode(root->r,temp->d);
        }
    }return root;
}
void inorder(node*temp){
    if(temp==NULL)return;
    inorder(temp->l);
    cout<<temp->d<<" ";
    inorder(temp->r);
}
int main(){
    root=insert(root,45);
    root=insert(root,26);
    root=insert(root,10);
    root=insert(root,60);
    root=insert(root,70);
    root=insert(root,30);
    root=insert(root,40);
    cout<<"BEFORE DELETION : ";inorder(root);
    root=delnode(root,10);
    cout<<"\nAFTER DELETION 10 : ";inorder(root);
    root=delnode(root,60);
    cout<<"\nAFTER DELETION 60 : ";inorder(root);
    root=delnode(root,45);
    cout<<"\nAFTER DELETION 45 : ";inorder(root);
}