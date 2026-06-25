#include<iostream>
using namespace std;
int main(){
    string fstr;
    cout << "Enter a first string: ";
    getline(cin, fstr);
    string sstr;
    cout << "Enter a second string: ";
    getline(cin, sstr);
    if(fstr.length() != sstr.length()){
        cout << "The strings are not anagrams." << endl;
        return 0;
    }
    unordered_map<char, int> freq;
    for(char c : fstr){
        freq[c]++;
    }
    for(char c : sstr){
        freq[c]--;
    }
    for(const auto& pair : freq){
        if(pair.second != 0){
            cout << "The strings are not anagrams." << endl;
            return 0;
        }
    }
    cout << "The strings are anagrams." << endl;
    return 0;
}