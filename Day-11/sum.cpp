#include<iostream>
using namespace std;
int Sum ( int a, int b){
    int c = a+b;
    return c;
}
int main(){
    int num1 , num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Sum = "<<Sum(num1,num2)<<"\n";
}