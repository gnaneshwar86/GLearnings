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
void postorder(node*temp){
    if(temp==NULL)return;
    postorder(temp->l);
    postorder(temp->r);
    cout<<temp->d<<" ";
}
int main(){
    int n;
    do{
        cin>>n;
        if(n<1)break;
        root=insert(root,n);
    }while(1);
    cout<<"POSTORDER TRAVERSAL : ";postorder(root);
}