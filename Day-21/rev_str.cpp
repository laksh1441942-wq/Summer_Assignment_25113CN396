#include<iostream>
using namespace std;
int main(){
    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);
    string str2;
    for(auto it : str1){
        str2 = it + str2;
    }
    cout << "Reversed string is: " << str2 << endl;
    return 0;
}