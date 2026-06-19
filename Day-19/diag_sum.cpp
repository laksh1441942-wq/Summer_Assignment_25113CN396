#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout << "Enter rows and columns of matrix: ";
    cin >> row >> col;
    int mat[row][col];
    cout << "Enter elements of  matrix:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i == j || i + j == col - 1){
                sum += mat[i][j];
            }
        }
    }
    cout << "Sum of diagonal elements: " << sum << endl;
    return 0;
}