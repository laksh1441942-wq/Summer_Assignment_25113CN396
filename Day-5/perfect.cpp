#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<"The number is a perfect number."<<endl;
    }
    else{
        cout<<"The number is not a perfect number."<<endl;
    }
    return 0;
}