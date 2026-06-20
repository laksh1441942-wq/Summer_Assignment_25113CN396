#include <iostream>
using namespace std;
int main(){
    int row, col;
    cout << "Enter rows and columns of first matrix: ";
    cin >> row >> col;
    if(row == col){
        cout << "Matrix is symmetric\n";
    } else {
        cout << "Matrix is not symmetric\n";
    }
    
    return 0;
}