#include<iostream>
using namespace std;
int main(){
    int start, end;
    cout<<" Enter the starting number =";
    cin>>start;
    cout<<" Enter the ending number =";
    cin>>end;
    cout<<"The armstrong numbers between "<<start<<" and "<<end<<" are: ";
    for(int i=start; i<=end; i++){
        int num=i, arm=0, count=0;
        while(num>0){
            num/=10;
            count++;
        }
        num=i;
        while(num>0){
            int rem=num%10;
            arm+=pow(rem, count);
            num/=10;
        }
        if(i==arm){
            cout<<i<<" ";
        }
    }
    return 0;
}