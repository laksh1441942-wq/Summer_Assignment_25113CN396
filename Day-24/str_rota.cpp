#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "ABCDE";
    string s2 = "CDEAB";
    if (s1.length() != s2.length()) {
        cout << "Strings are not rotations of each other." <<endl;
        return 0;
    }
    string temp = s1 + s1;
    
    if (temp.find(s2) !=  string::npos) {
        cout << "Strings are rotations of each other." <<  ::endl;
    } else {
        cout << "Strings are not rotations of each other." <<endl;
    }
    return 0;
}   