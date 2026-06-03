#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    int decimal=0;
    cout<<"Enter a number: ";
    cin>>num;
    int i=0;
    while(num>0){
        int rem=num%10;
        decimal=decimal+rem*pow(2,i);
        num=num/10;
        i++;
    }
    cout<<decimal;
    return 0;
}