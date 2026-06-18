#include<iostream>
using namespace std;
int main(){
    int nums[7] = {3,1,2,5,2,4,7};
    int size = 7;
    int min = INT_MAX;
    int index;
    for(int i=0; i<size; i++){
        min = i;
        for(int j=i+1; j<size; j++){
            if(nums[min]>nums[j]){
                min = j;
            }
        }
        int temp = nums[i];
        nums[i]=nums[min];
        nums[min]=temp;
        
    }
    for(int x:nums){
        cout<<x<<" ";
    }
    return 0;
}