#include<iostream>
using namespace std;
int main(){
    string lstr;
    cout << "Enter a string: ";
    getline(cin, lstr);
    string ustr;
    for(char c : lstr){
        ustr += toupper(c);
    }
    cout << "String in uppercase: " << ustr << endl;
    return 0;
}