#include<iostream>
using namespace std;
int main(){
    int nums[7] = {3,1,2,5,2,4,7};
    int size = 7;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }
        }
    }
    for(int x : nums){
        cout<<x<<" ";
    }
    return 0;
}