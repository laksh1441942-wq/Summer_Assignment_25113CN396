#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter the element of first array : ";
    cin>>n1;
    cout<<"Enter the element of second array : ";
    cin>>n2;
    int nums[n1+n2];
    cout<<"Enter the elements of first array : "<<endl;
    for(int i=0; i<n1; i++){
        cin>>nums[i];
    }
    cout<<"Enter the elements of second array : "<<endl;
    for(int i=n1; i<n1+n2; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n1+n2; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
    

}