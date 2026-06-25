#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string str1 = str;
    string rev_str = "";
    for(char c : str1){
        rev_str = c + rev_str;
    }
    if(str == rev_str){
        cout << "The string is a palindrome." << endl;
    }
    else{
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}