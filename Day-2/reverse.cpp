#include<iostream>
using namespace std;
int main(){
    int num, rev=0;
    cout<<"Enter the number =";
    cin>>num;
    while(num>0){
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    cout<<"Then reverse of the given number is = "<<rev;
    return 0;
}