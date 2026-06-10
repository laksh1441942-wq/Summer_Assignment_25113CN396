#include<iostream>
using namespace std;
int Max ( int a, int b){
    if ( a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int num1 , num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Maximum = "<<Max(num1,num2)<<"\n";
}