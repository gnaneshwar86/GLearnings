#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int value;
    int weight;
    double valuePerWeight;
    int index;
};

bool compare(Item a, Item b) {
    return a.valuePerWeight > b.valuePerWeight;
}

pair<double, vector<double>> fractional_knapsack(int n, vector<int>& values, vector<int>& weights, int capacity) {
    vector<Item> items;
    for (int i = 0; i < n; ++i) {
        items.push_back({values[i], weights[i], double(values[i]) / weights[i], i});
    }

    sort(items.begin(), items.end(), compare);

    double total_value = 0;
    vector<double> fractions(n, 0.0);

    for (const auto& item : items) {
        if (capacity <= 0)
            break;
        double fraction = min(1.0, double(capacity) / item.weight);
        total_value += fraction * item.value;
        capacity -= fraction * item.weight;
        fractions[item.index] = fraction;
    }

    return {total_value, fractions};
}

int main() {
    int n;
    cin >> n;  // Number of items

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];  // Values of items
    }

    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];  // Weights of items
    }

    int capacity;
    cin >> capacity;  // Capacity of knapsack

    auto result = fractional_knapsack(n, values, weights, capacity);
    cout << "Maximum value of items: " << result.first << endl;
    cout << "Fractions of items to be included in the knapsack: ";
    for (const auto& fraction : result.second) {
        cout << fraction << " ";
    }
    cout << endl;

    return 0;
}