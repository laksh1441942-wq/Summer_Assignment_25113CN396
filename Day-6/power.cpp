#include<iostream>
using namespace std;
int main(){
    int num;
    int power=0;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>power;
    for(int i=1;i<power;i++){
        num=num*num;
    }
    cout<<num;
    return 0;
}