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
    int low = 0;
    int high = num-1;
    while( low<= high){
        if(arr[low]!=0){
            low++;
        }
        else if(arr[high]==0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }
    for(int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
}