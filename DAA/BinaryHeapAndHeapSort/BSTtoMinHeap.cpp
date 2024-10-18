// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node*left,*right;
    Node(int key)
    {
        this->key=key;
        this->left=this->right=nullptr;
    }
};
Node*insert(Node*root,int key)
{
    if(root==nullptr)
    {
        return new Node(key);
    }
    if(key<root->key)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}
void printLevelOrderTraversal(Node*root)
{
    if(root==nullptr)
    {
        return;
    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        int n=q.size();
        while(n-->0)
        {
            Node*front=q.front();
            q.pop();
            cout<<front->key<<" ";
            if(front->left!=nullptr)
            {
                q.push(front->left);
            }
            if(front->right!=nullptr)
            {
                q.push(front->right);
            }
        }
        cout<<endl;
    }
}
void inorder(Node*root,queue<int>&keys)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left,keys);
    keys.push(root->key);
    inorder(root->right,keys);
}
void preorder(Node*root,queue<int>&keys)
{
    if(root==nullptr)
    {
        return;
    }
    root->key=keys.front();
    keys.pop();
    preorder(root->left,keys);
    preorder(root->right,keys);
}
void convert(Node*root)
{
    queue<int>keys;
    inorder(root,keys);
    preorder(root,keys);
}
int main()
{
    Node*root=nullptr;
    int n,i;
    cin>>n;
    int keys[n];
    for(i=0;i<n;i++)
    {
        cin>>keys[i];
    }
    for(int key:keys)
    {
        root=insert(root,key);
    }
    convert(root);
    printLevelOrderTraversal(root);
    return 0;
}