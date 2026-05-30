#include<iostream>
using namespace std;
int main(){
    int num1, num2,gcd;
    cout<<" Enter first number =";
    cin>>num1;
    cout<<" Enter second number =";
    cin>>num2;
    if (num1>num2){
        for(int i=1; i<=num2; i++){
            if(num1%i==0 && num2%i==0){
                gcd=i;
                
            }
        }
    }
    else{
        for(int i=1; i<=num1; i++){
            if(num1%i==0 && num2%i==0){
                gcd=i;
                
            }
        }
    }
    cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd;
    return 0;
}