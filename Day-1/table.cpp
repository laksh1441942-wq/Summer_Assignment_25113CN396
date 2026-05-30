#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter the number = ";
    cin>>num;
    for(i=1; i<=10; i++){
        cout<<num << " * " << i << " = " << num*i<<"\n";
    }
    return 0;
}