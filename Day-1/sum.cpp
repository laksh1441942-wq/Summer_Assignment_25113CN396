#include<iostream>
using namespace std;
int main(){
    int num, sum=0, i;
    cout<<"Enter  a number: ";
    cin>>num;
    for(i=1; i<=num; i++){
        sum+=i;
    }
    cout<<"The sum of first "<<num<<" natural is "<<sum;
    return 0;
}