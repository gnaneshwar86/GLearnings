#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>
using namespace std;
void findTwoPairsWithEqualSum(const vector<int>& arr) {
    unordered_map<int, pair<int, int>> sumMap; 
    vector<pair<int, int>> resultPairs;  
    int n = arr.size();
    for (int i=0;i<n;++i) {
        for (int j=i+1;j<n;++j) {
            int currentSum = arr[i] + arr[j];
            if (sumMap.find(currentSum) != sumMap.end()) {
                auto prevPair = sumMap[currentSum];
                resultPairs.push_back({prevPair.first, prevPair.second});
                resultPairs.push_back({arr[i], arr[j]});
                if (resultPairs.size() / 2 == 2) {
                    cout << resultPairs[0].first << "+" << resultPairs[0].second << " and " << resultPairs[1].first << "+" << resultPairs[1].second << endl;
                    return;
                }
            } 
            else 
            {
                sumMap[currentSum] = {arr[i], arr[j]};
            }
        }
    }
    cout << "No pairs found" << endl;
}
int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    findTwoPairsWithEqualSum(arr);
}
