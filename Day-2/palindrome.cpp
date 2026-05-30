#include<iostream>
using namespace std;
int main(){
    int num, rev=0;
    cout<<" Enter a number =";
    cin>>num;
    int num1=num;
    while(num>0){
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(num1==rev){
        cout<<"The given number is a palindrome.";
    }
    else{
        cout<<"The given number is not a palindrome.";
    }
    return 0;
}