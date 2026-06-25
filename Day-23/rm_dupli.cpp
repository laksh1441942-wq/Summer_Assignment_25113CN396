#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    unordered_set<char> seen;
    string result;
    for (char c : str) {
        if (seen.insert(c).second) { // insert returns pair; .second is true if insertion happened
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}