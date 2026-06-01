#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int factor=0;
    for(int i=2;i<=(num/2)-1;i++){
        if(num%i==0){
            bool isPrime=true;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                factor=i;
            }
        }
    }
    cout<<"The largest prime factor of "<<num<<" is "<<factor<<endl;
    return 0;
}