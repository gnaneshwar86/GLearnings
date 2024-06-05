#include<bits/stdc++.h>
using namespace std;

vector<string> wordBreakHelper(const string& s, int start, const unordered_set<string>& dict) {
    vector<string> validSubstr;
    
    if (start == s.length())
        validSubstr.push_back("");
    for (int end = start + 1; end <= s.length(); ++end) {
        string prefix = s.substr(start, end - start);
        if (dict.find(prefix) != dict.end()) {
            vector<string> suffixes = wordBreakHelper(s, end, dict);
            for (const string& suffix : suffixes) {
                validSubstr.push_back(prefix + (suffix.empty() ? "" : " ") + suffix);
            }
        }
    }
    return validSubstr;
}
vector<string> wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    return wordBreakHelper(s, 0, dict);
}
int main(){
    string a,c;
    int n;
    cin>>a>>n;
    vector<string>r;
    for(int i=0;i<n;i++){
        cin>>c;
        r.push_back(c);
    }
    cout<<"[";
    vector<string>ar=wordBreak(a,r);
    for(int i=0;i<ar.size();i++){
        if(i==ar.size()-1)
        cout<<ar[i];
        else
        cout<<ar[i]<<", ";
    }
    cout<<"]";
    
}
