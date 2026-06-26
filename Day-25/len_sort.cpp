#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparator function
bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), compare);

    cout << "\nWords sorted by length:\n";
    for (string word : words) {
        cout << word << " ";
    }

    return 0;
}