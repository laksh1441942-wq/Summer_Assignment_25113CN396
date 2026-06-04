#include<iostream>
using namespace std;
int reverse(int n, int len){
    if(n==0){
        return 0;
    }
    else{
        return (n%10) * pow(10, len-1) + reverse(n/10, len-1);
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int len = to_string(num).length();
    cout<<"Reverse of "<<num<<" is: "<<reverse(num, len)<<endl;
    return 0;
}