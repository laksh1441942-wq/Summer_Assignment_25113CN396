#include<iostream>
using namespace std;
int main(){
    int num, pro=1;
    cout<<"Enter the number = ";
    cin>>num;
    while(num>0){
        int rem=num%10;
        pro*=rem;
        num/=10;
    }
    cout<<"The product of the digits in " <<num<<" is = "<<pro;
    return 0;
}