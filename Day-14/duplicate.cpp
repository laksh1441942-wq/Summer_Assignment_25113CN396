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
    cout<<"Duplicate elements are : ";
    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<", ";
                break;
            }
        }
    }
    return 0;
}