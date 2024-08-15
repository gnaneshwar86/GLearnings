// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct node{
    char c;
    int f;
    node *l,*r;
    node(char a,int b){
        c=a;
        f=b;
    }
};
struct myComparator{
    bool operator()(node *n1,node *n2){
        return (n1->f>n2->f);
    }
};
void printnode(node* root,string s){
    if(root==NULL)return;
    if(root->c!='#')
    cout<<root->c<<":"<<s<<endl;
    printnode(root->l,s+"0");
    printnode(root->r,s+"1");
}
int main(){
    int n ;
    cin>>n;
    char ch[n];
    int fr[n];
    for(int i=0;i<n;i++)cin>>ch[i];
    for(int i=0;i<n;i++)cin>>fr[i];
    priority_queue<node*,vector<node*>,myComparator>q;
    for(int i=0;i<n;i++){
        node* newn=new node(ch[i],fr[i]);
        q.push(newn);
    }
    node* root=NULL;
    while(q.size()>1){
        node* left=q.top();
        q.pop();
        node* right=q.top();
        q.pop();
        node* mergenode=new node('#',left->f+right->f);
        mergenode->l=left;
        mergenode->r=right;
        root=mergenode;
        q.push(mergenode);
    }
    printnode(root,"");
}