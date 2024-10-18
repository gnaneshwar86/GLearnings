// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void backtrack(string &s,int start,int end)
{
    if(start==end)
    {
        cout<<s<<endl;
        return;
        
    }
    for(int i=start;i<=end;++i)
    {
        swap(s[start],s[i]);
        backtrack(s,start+1,end);
        swap(s[start],s[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    backtrack(s,0,s.length()-1);
}