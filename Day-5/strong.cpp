#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int num1=num;
    int sum=0;
    while(num>0){
        int rem=num%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        num/=10;
    }
    if(sum==num1){
        cout<<"The number is a strong number."<<endl;
    }
    else{
        cout<<"The number is not a strong number."<<endl;
    }

}