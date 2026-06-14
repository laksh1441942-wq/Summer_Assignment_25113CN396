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
    int max=arr[0], smax=0;
    for( int i= 0; i<num; i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }
    }
    cout<<"Second largest element ="<<smax;
    return 0;
}