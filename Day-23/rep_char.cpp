#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    char ch;
    for(char c : str){
        if(str.find(c) != str.rfind(c)){
            ch = c;
            break;
        }
    }
    if(ch != 0){
        cout << "First repeating character is: " << ch << endl;
    }
    else{
        cout << "No repeating character found." << endl;
    }
    return 0;
}