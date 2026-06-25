#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int length = 0;
    for(auto c :str){
        length++;
    }
    cout << "Length of the string is: " << length << endl;
    return 0;
}