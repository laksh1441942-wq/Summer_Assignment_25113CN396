#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for(char c : str){
        if(isspace(c)){
            continue;
        }
        cout << c;
    }
    cout << endl;
    return 0;
}