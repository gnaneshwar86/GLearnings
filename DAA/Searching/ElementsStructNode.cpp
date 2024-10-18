#include <bits/stdc++.h> 
using namespace std; 

struct ele { 
    int count, index, val; 
}; 

bool mycomp(struct ele a, struct ele b) {
    if(a.count != b.count)
        return a.count >= b.count;      
    else
        return a.index < b.index;     
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, pair<int, int>> o; 
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        o[a[i]].first++;
        o[a[i]].second = i;             
    }
    
    vector<ele> e(o.size());
    int j = 0;
    
    for(auto i : o) {
        e[j].count = i.second.first;
        e[j].val = i.first;
        e[j].index = i.second.second;   
        j++;
    }
    
    sort(e.begin(), e.end(), mycomp);
    
    for(const auto& elem : e) {
        for(int j = 0; j < elem.count; j++)
            cout << elem.val << " ";
    }
}
