#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator ()(const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};


void findPalindromicPairs(const vector<pair<int, int>>& pairs) {
    unordered_set<pair<int, int>, pair_hash> pairSet;
    unordered_set<pair<int, int>, pair_hash> printedPairs;
    bool found = false;

    for (const auto& p : pairs) {
        auto reversed = make_pair(p.second, p.first);

        if (pairSet.find(reversed) != pairSet.end() && printedPairs.find(p) == printedPairs.end()) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
            found = true;
            printedPairs.insert(reversed);
        }
        pairSet.insert(p);
    }

    if (!found) {
        cout << "No such pairs" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> pairs(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> pairs[i].second >> pairs[i].first;
    }
    
    findPalindromicPairs(pairs);
    
    return 0;
}
