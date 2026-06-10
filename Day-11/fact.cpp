#include<iostream>
using namespace std;
int factorial( int a){
    int fact =1;
    if( a == 0){
        return 1;
    }
    for (int i= 1; i<=a; i++){
        fact *= i;
    }
    return fact;
    
}
int main(){
    int num;
    cout<<"Enter the first number : ";
    cin>>num;
    cout<<"Factorial = "<<factorial(num)<<"\n";
}