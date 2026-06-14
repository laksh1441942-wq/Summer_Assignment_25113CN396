#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the no. of elements";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the number you want find : ";
    cin>>target;
    for( int i= 0; i<num; i++){
        if( arr[i]==target){
            cout<<"Your element is at : "<<i<<"position\n";
        }
    }
    return 0;
}