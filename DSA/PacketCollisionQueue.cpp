#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>c;
    queue<int>q;
    priority_queue<int>s;
    for(int i=0;i<=n-c;i++){
        while(!s.empty())
        s.pop();
        for(int j=i;j<i+c;j++){
            s.push(a[j]);
        }
        q.push(s.top());
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}