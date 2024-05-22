// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct vertex
{
    int v;
    int d;
};
int min(int m[],int n)
{
    bool vi[n]={false};
    queue<vertex>q;
    vi[0]=true;
    vertex s={0,0};
    q.push(s);
    vertex qv;
    while(!q.empty())
    {
        qv=q.front();
        int v=qv.v;
        if(v==n-1)
        break;
        q.pop();
        for(int i=v+1;i<=v+6&& v<n;i++)
        {
            if(!vi[i])
            {
                vertex nv;
                nv.d=(qv.d+1);
                vi[i]=true;
                if(m[i]!=-1)
                 nv.v=m[i];
                else
                nv.v=i;
                q.push(nv);
            }
        }
    }
    return qv.d;
}
int main()
{
    int n=30;
    int m[n];
    for(int i=0;i<n;i++)
      m[i]=-1;
     
     for(int i=0;i<8;i++)
     {
         int a,b;
         cin>>a>>b;
         m[a-1]=b-1;
     }
     cout<<"Min Dice throws required is "<<min(m,n);
}