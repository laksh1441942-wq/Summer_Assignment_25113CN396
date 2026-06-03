#include<iostream>
using namespace std;
int main(){
    int num;
    int binary=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        int rem=num%2;
        binary=binary*10+rem;
        num=num/2;
    }
    cout<<binary;
    return 0;
}