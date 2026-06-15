#include<iostream>
#include<vector>
#include<algorithm>
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
    int shift;
    cout<<"How much shift : ";
    cin>>shift;
    reverse(arr, arr+shift+1);
    
    reverse(arr+shift+1,arr+num);
    
    reverse(arr,arr+num);
    for(int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }

}