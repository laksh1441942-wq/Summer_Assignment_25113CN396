#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> num1={1,2,3,4,5};
    vector<int> num2={1,5,3,2,7};
    set<int> s1(num1.begin(), num1.end());
    set<int>ans;
    for( int x : num2){
        if(s1.find(x)!=s1.end()){
            ans.insert(x);
        }
    }
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}