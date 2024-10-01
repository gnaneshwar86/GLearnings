
// #include<bits/stdc++.h>
// using namespace std;
// int ld(string s1,string s2){
//     int s1l=s1.length(),s2l=s2.length();
//     int dp[s1l+1][s2l+1];
//     for(int i=0;i<=s1l;i++){
//         for(int j=0;j<=s2l;j++){
//             if(j==0)
//                 dp[i][j]=i;
//             else if(i==0)
//                 dp[i][j]=j;
//             else if(s1[i-1]==s2[j-1])
//                 dp[i][j]=dp[i-1][j-1];
//             else
//                 dp[i][j]=1+min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
//         }
//     }
//     return dp[s1l][s2l];
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     cout<<ld(s1,s2);
// }