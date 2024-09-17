#include<bits/stdc++.h>
using namespace std;
struct node{
    char ch;
    int freq;
    node *l, *r;
    node(char c, int f){
        ch = c;
        freq = f;
        l = r = NULL;
    }
};
void printnode(node* root, string s){
    if(root == NULL)
    return;
    if(root->ch != '#')
    cout<<root->ch<<" : "<<s<<endl;
    printnode(root->l, s + "0");
    printnode(root->r, s + "1");
}
struct myComparator{
    bool operator()(node* a, node* b){
        return (a->freq > b->freq);
    }
};
int main(){
    int n = 6;
    char ch[] = { 'a', 'b', 'c', 'd', 'e', 'f'};
    int fr[] = { 5, 9, 12, 13, 16, 45};
    priority_queue<node*,vector<node*>,myComparator>q;
    for(int i = 0;i < n; i++){
        node* temp = new node(ch[i], fr[i]);
        q.push(temp);
    }
    node* root = NULL;
    while(q.size() > 1){
        node* left = q.top();
        q.pop();
        node* right =q.top();
        q.pop();
        node* mergenode = new node('#', left->freq + right->freq);
        mergenode->l = left;
        mergenode->r = right;
        root = mergenode;
        q.push(mergenode);
    }
    printnode(root,"");
}