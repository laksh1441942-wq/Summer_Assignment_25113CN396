#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    char first = 0;  
    for(char c : str){
        if(str.find(c) == str.rfind(c)){
            first = c;
            break;
        }
    }
    if(first != 0){
        cout << "First non-repeating character is: " << first << endl;
    }
    else{
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}