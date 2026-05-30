#include<iostream>
using namespace std;
int main(){
    int num1, num2, lcm;
    cout<<" Enter first number = ";
    cin>>num1;
    cout<<" Enter second number = ";
    cin>>num2;
    if (num1>num2){
        for(int i=num1; i<=num1*num2; i++){
            if(i%num1==0 && i%num2==0){
                lcm=i;
                break;
            }
        }
    }
    else{
        for(int i=num2; i<=num1*num2; i++){
            if(i%num1==0 && i%num2==0){
                lcm=i;
                break;
            }
        }
    }
    cout<<"The LCM of "<<num1<<" and "<<num2<<" is "<<lcm;
    return 0;

}