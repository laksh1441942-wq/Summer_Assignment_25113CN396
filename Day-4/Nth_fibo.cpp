#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<" Enter a number =";
    cin>>num;
    if(num==1 ){
        cout<<0;
    }
    else if(num==2){
        cout<<1;
    }
    else{
        int a=0, b=1, c;
        for(int i=2; i<num; i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }
    return 0;
}