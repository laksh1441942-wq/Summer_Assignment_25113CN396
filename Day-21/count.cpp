#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int vowel = 0;
    int consonant = 0;
    for(char c :str){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            vowel++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            consonant++;
        }
    }
    cout << "Number of vowels: " << vowel << endl;
    cout << "Number of consonants: " << consonant << endl;
    return 0;
}