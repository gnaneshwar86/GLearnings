#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

bool can_split_into_palindromes(const string& s) {
    int n = s.length();
    for (int i = 1; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            string first_part = s.substr(0, i);
            string middle_part = s.substr(i, j - i);
            string last_part = s.substr(j);
            if (is_palindrome(first_part) && is_palindrome(middle_part) && is_palindrome(last_part)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    cout << (can_split_into_palindromes(s) ? "True" : "False") << endl;

    return 0;
}
