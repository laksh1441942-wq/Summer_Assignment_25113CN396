#include<iostream>
using namespace std;
int main(){
    int num, count=0, arm=0;
    cout<<" Enter a number =";
    cin>>num;
    int num1=num;
    while(num>0){
        num/=10;
        count++;
    }
    num=num1;
    while(num1>0){
        int rem=num1%10;
        arm+=pow(rem, count);
        num1/=10;
    }
    if(num==arm){
        cout<<"The given number is an armstrong number.";
    }
    else{
        cout<<"The given number is not an armstrong number.";
    }
    return 0;

}