#include<iostream>
using namespace std;
int main(){
    int nums1[5] = {2,3,5,8,11};
    int nums2[3] = {1,4,6};
    int merged[8];
    int i, j, k;
    i = 0; j = 0; k = 0;
    while(i < 5 && j < 3){
        if(nums1[i] < nums2[j]){
            merged[k] = nums1[i];
            i++;
        }
        else{
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }
    while(i < 5){
        merged[k] = nums1[i];
        i++;
        k++;
    }
    while(j < 3){
        merged[k] = nums2[j];
        j++;
        k++;
    }
    for(int l = 0; l < 8; l++){
        cout << merged[l] << " ";
    }
    return 0;
}