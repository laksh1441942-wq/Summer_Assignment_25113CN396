#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of sorted array :\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target ;
    cout<<"Enter the target value : ";
    cin>>target;

    int low =0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if( arr[mid]==target){
            cout<<"The target is at : "<<mid+1<<" position"<<endl;
            return 1;
        }
        else if(arr[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}