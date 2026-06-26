#include<iostream>
#include<set>
using namespace std;
int main(){
    char str1[20] = "Hello World";
    multiset<char> charSet;
    for(int i = 0; str1[i] != '\0'; i++){
        charSet.insert(str1[i]);
    }
    for(auto it : charSet){
        cout << it ;
    }
    return 0;
}