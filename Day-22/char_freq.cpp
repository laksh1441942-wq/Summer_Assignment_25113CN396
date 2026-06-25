#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    unordered_map<char, int> freq;
    for(char c : str){
        freq[c]++;
    }
    for(auto p : freq){
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}