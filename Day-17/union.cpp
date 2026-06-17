#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> num1={1,2,3,4,5};
    vector<int> num2={1,5,3,2,7};
    set<int>ans;

    for(int x : num1){
        ans.insert(x);
    }
    for(int x : num2){
        ans.insert(x);
    }
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}