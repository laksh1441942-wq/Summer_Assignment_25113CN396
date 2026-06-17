#include <iostream>
#include<map>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> mp;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        max = std::max(max,mp[arr[i]]);
    }
    for(auto num : mp){
        if(num.second == max){
            max = num.first;
        }
    }
    cout<<"Number with maximum frequency : "<<max<<endl;
    return 0;

}