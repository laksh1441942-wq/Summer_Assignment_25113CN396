#include<iostream>
using namespace std;
int main(){
    int low, high, flag=0;
    cout<<"Enter the lower limit of the range = ";
    cin>>low;
    cout<<"Enter the upper limit of the range = ";
    cin>>high;
    cout<<"The prime numbers between "<<low<<" and "<<high<<" are: ";
    for(int i=low; i<=high; i++){
        flag=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                flag++;
            }
        }
        if(flag==2){
            cout<<i<<", ";
        }
    }
    return 0;

}