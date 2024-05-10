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
void inorder(node*temp){
    if(temp==NULL)return;
    inorder(temp->l);
    cout<<temp->d<<" ";
    inorder(temp->r);
}
int main(){
    int n;
    do{
        cin>>n;
        if(n<1)break;
        root=insert(root,n);
    }while(1);
    cout<<"Tree values are: \n";inorder(root);
}