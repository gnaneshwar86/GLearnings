//RockPaperScissors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=n/2+1;
        int rem=n-cnt;
        vector<char>temp;
        int in=0;
        while(in<n && rem>0)
        {
            temp.push_back('P');
            rem--;
            if(s[in]=='R')
            {
                rem++;
            }
            in++;
        }
        for(;in<s.size();in++)
        {
            if(s[in]=='R')
            {
                temp.push_back('P');
            }
            else if(s[in]=='S')
            temp.push_back('R');
            else 
            temp.push_back('S');
            
        }
        for(auto it:temp)
        {
            cout<<it;
        }
        cout<<endl;
    }
}