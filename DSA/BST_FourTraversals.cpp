#include<bits/stdc++.h>
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
void preorder(node*temp){
    if(temp==NULL)return;
    cout<<temp->d<<" ";
    preorder(temp->l);
    preorder(temp->r);
}
void inorder(node*temp){
    if(temp==NULL)return;
    inorder(temp->l);
    cout<<temp->d<<" ";
    inorder(temp->r);
}
void postorder(node*temp){
    if(temp==NULL)return;
    postorder(temp->l);
    postorder(temp->r);
    cout<<temp->d<<" ";
}
void levelorder(node* root){
    if(root==NULL)return;
    queue<node*>q;
    node* temp;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        temp=q.front();
        q.pop();
        if(temp==NULL){
            q.push(NULL);
        }
        else{
            if(temp->l)
            q.push(temp->l);
            if(temp->r)
            q.push(temp->r);
            cout<<temp->d<<" ";
        }
    }
}
int main(){
    int n;
    do{
        cin>>n;
        if(n<1)break;
        root=insert(root,n);
    }while(1);
    cout<<"PREORDER TRAVERSAL : ";preorder(root);
    cout<<"\nINORDER TRAVERSAL : ";inorder(root);
    cout<<"\nPOSTORDER TRAVERSAL : ";postorder(root);
    cout<<"\nLEVELORDER TRAVERSAL : ";levelorder(root);
}