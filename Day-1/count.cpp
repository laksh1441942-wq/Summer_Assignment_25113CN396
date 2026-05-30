#include<iostream>
using namespace std;
int main(){
    int num, i, count=0;
    cout<<" Enter a number =";
    cin>>num;
    while(num>0){
        count++;
        num/=10;
    }
    cout<<"The number of digits in the given number is: "<<count;
    return 0;
}