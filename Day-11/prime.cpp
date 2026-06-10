#include<iostream>
using namespace std;
void CheckPrime( int a){
    int flag =0;
    for (int i= 2; i*i<=a; i++){
        if( a % i == 0){
            flag++;
            break;
        }
    }
    if(flag == 1){
        cout<<"This is NOT a prime number \n";
    }
    else{
        cout<<"This is a prime number \n";
    }
}
int main(){
    int num;
    cout<<"Enter the first number : ";
    cin>>num;
    CheckPrime(num);
}