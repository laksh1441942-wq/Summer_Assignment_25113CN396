#include<iostream>
using namespace std;
int main(){
    int num, flag=0;
    cout<<" Enter a number =";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            flag++;
        }
    }
    if(flag==2){
        cout<<"The given number is a prime number.";
    }
    else{
        cout<<"The given number is not a prime number.";
    }
    return 0;
}