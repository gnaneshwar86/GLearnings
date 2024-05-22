1.
// You are using GCC
#include<iostream>
using namespace std;
void ins(int h[],int s,int n){
    int f=n%s;
    int i=f;
    int c=0;
    while(h[i]!=-1){
        c++;
        i=(f+(c*c))%s;
    }
    h[i]=n;
}
int main(){
    int a,b,n,c=0;
    cin>>a>>b;
    int h[a];
    int g[b];
    for(int i=0;i<a;i++)h[i]=-1;
    for(int i=0;i<b;i++)g[i]=-1;
    for(int i=0;i<a;i++){
        cin>>n;
        ins(h,a,n);
    }
    for(int i=0;i<b;i++){
        cin>>n;
        for(int j=0;j<a;j++){
            if(h[j]==n)c++;
        }
    }
    if(c==b)cout<<"Subset";
    else cout<<"Not a subset";
}

2.
// You are using GCC
#include<iostream>
using namespace std;
void ins(int h[],int s,int n){
    int f=n%s;
    int i=f;
    int c=0;
    while(h[i]!=-1){
        c++;
        i=(n+c)%s;
    }
    h[i]=n;
}
int main(){
    int s,n;
    cin>>s;
    int h[s];
    for(int i=0;i<s;i++)h[i]=-1;
    for(int i=0;i<s;i++){
        cin>>n;
        ins(h,s,n);
    }
    for(int i=0;i<s;i++){
        cout<<h[i]<<" ";
    }
}

3.// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
void ins(vector<int>l[],int n){
    int i=n%3;
    l[i].push_back(n);
}
void print(vector<int>l[]){
    for(int i=0;i<3;i++){
    int k=0;
        cout<<"chain["<<i<<"]";
        for(int j:l[i]){
            if(k==0)
            cout<<"-->"<<j;
            else
            cout<<" -->"<<j;
            k++;
        }
        if(k==0)
        cout<<"-->NULL\n";
        else
        cout<<" -->NULL\n";
    }
}
int main(){
    int s,n;
    cin>>s;
    vector<int>l[3];
    for(int i=0;i<s;i++){
        cin>>n;
        ins(l,n);
    }
    print(l);
}

4.
// You are using GCC
#include<iostream>
using namespace std;
void ins(int h[],int s,int n){
    int h1=n%s;
    int h2=7-(n%7);
    int i=h1;
    int c=0;
    while(h[i]!=0){
        c++;
        i=(h1+(c*h2))%s;
    }
    h[i]=n;
}
int main(){
    int s,n;
    cin>>s;
    int h[10];
    for(int i=0;i<10;i++)h[i]=0;
    for(int i=0;i<s;i++){
        cin>>n;
        ins(h,10,n);
    }
    for(int i=0;i<10;i++){
        cout<<"Element at position "<<i<<": "<<h[i]<<endl;
    }
}

5.
// You are using GCC
#include<iostream>
using namespace std;
void ins(int h[],int s,int n){
    int h1=n%s;
    int h2=7-(n%7);
    int i=h1;
    int c=0;
    while(h[i]!=0){
        c++;
        i=(h1+(c*h2))%s;
    }
    h[i]=n;
}
int main(){
    int s,n,c=0;
    cin>>s;
    int h[10];
    for(int i=0;i<10;i++)h[i]=0;
    for(int i=0;i<s;i++){
        cin>>n;
        ins(h,10,n);
    }
    cin>>n;
    for(int i=0;i<10;i++){
        if(h[i]==n){
            cout<<"value is found at index "<<i;
            c++;
        }
    }
    if(c==0)cout<<"value is not found";
    for(int i=0;i<10;i++){
        cout<<"\nElement at position "<<i<<": "<<h[i];
    }
}