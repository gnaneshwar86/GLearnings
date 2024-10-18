//OptimalStorageOnTapesSongs
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct song
{
    int length;
    int id;
};
int main()
{
    int n;
    cin>>n;
    song s[n];
    cout<<"Enter number of Songs:"<<endl;
    cout<<"Enter the song length:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].length;
        s[i].id=i+1;
        cout<<"Song "<<s[i].id<<" :"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].length>s[j+1].length)
            {
                swap(s[j],s[j+1]);
            }
        }
    }
    cout<<"The Best Ordering is "<<endl;
    int curr=0,tot=0;
    for(int i=0;i<n;i++){
        curr+=s[i].length;
        tot+=curr;
        cout<<"Song "<<s[i].id<<" : "<<s[i].length<<endl;
    }
    cout<<"Minimum Mean Retrieval Time is "<<tot;
}//RowAddColADD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q,x,mr,mc,rc;
    cin>>n>>q;
    vector<int>r(n,0);
    vector<int>c(n,0);
    while(q--)
    {
        string s;
        cin>>s>>rc>>x;
        if(s[0]=='R')
        {
            r[rc-1]+=x;
            
        }
        else
        {
            c[rc-1]+=x;
        }
    }
    mr=*max_element(r.begin(),r.end());
    mc=*max_element(c.begin(),c.end());
    cout<<mr+mc;
}
