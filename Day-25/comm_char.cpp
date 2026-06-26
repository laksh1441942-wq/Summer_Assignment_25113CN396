#include<iostream>
using namespace std;
int main(){
    char str1[20] = "Hello";
    char str2[20] = "World";
    unordered_map<char, int> charCount;
    for(int i = 0; str1[i] != '\0'; i++){
        charCount[str1[i]]++;
    }
    for(int i = 0; str2[i] != '\0'; i++){
        charCount[str2[i]]++;
    }
    for(auto it : charCount){
        if(it.second > 1){
            cout << it.first ;
        }
    }
    return 0;
}