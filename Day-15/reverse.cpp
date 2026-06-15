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
    for(int i=num-1; i>=0; i--){
        cout<<arr[i]<<", ";
    }
    return 0;
}