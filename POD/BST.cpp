// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int d;
    node *l,*r;
}*root=NULL,*newn=NULL;
node* ins(int n,node* root){
    if(root==NULL){
        newn=new node();
        newn->d=n;
        newn->l=NULL;
        newn->r=NULL;
        return newn;
    }
    else{
        if(n<root->d)
        root->l=ins(n,root->l);
        else
        root->r=ins(n,root->r);
    }return root;
}
void in(node* root){
    if(root==NULL)return;
    in(root->l);
    cout<<root->d<<" ";
    in(root->r);
}
void pre(node* root){
    if(root==NULL)return;
    cout<<root->d<<" ";
    pre(root->l);
    pre(root->r);
}
void pos(node* root){
    if(root==NULL)return;
    pos(root->l);
    pos(root->r);
    cout<<root->d<<" ";
}
int main(){
    int c,k=0;
    while(1){
        cin>>c;
        if(c<5)k++;
        if(c==1){
            root=NULL;
            int n,a;
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>a;
                root=ins(a,root);
            }
            cout<<"BST with "<<n<<" nodes is ready to use\n";
        }
        else if(c==2){
            cout<<"BST Traversal in INORDER\n";
            in(root);
            cout<<endl;
        }
        else if(c==3){
            cout<<"BST Traversal in PREORDER\n";
            pre(root);
            cout<<endl;
        }
        else if(c==4){
            cout<<"BST Traversal in POSTORDER\n";
            pos(root);
            cout<<endl;
        }
        else{
            break;
        }
    }
    if(k==0)
            cout<<"Wrong choice";
}