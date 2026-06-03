#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        int rem=num%2;
        if(rem==1){
            count++; }
        num=num/2;
    }
    cout<<count;
    return 0;
}