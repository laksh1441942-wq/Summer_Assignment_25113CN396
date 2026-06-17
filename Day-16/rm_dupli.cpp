#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    set<int> num(nums, nums+n);
    
    for( int x : num){
        cout<< x<< " ";
    }
    return 0;
}