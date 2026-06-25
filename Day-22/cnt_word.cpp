#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int cnt = 0;
    for(auto c : str){
        if(isalpha(c)){
            cnt++;
        }
    }
    cout << "Number of words in the string: " << cnt << endl;
    return 0;
}