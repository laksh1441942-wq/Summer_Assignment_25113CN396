#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target value : ";
    cin>>target;

    map<int,int> mp;
    for(int i=0; i<n; i++){
        int k = target - nums[i];
        if(mp.find(k)!=mp.end()){
            cout<<"The Pair of elements are : "<<nums[i]<<", "<<nums[mp[k]];
        }
        mp[nums[i]]=i;  
    }
}