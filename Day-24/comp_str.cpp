#include<iostream>
#include<map>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    map<char, int> charCount;
    for (char c : str) {
        charCount[c]++;
    }
    cout << "Character counts:" << endl;
    for (const auto& pair : charCount) {
        if(pair.first != ' '){
            cout << pair.first << pair.second ;
        }
    }
    return 0;   
}