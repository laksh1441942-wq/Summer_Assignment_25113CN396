#include <iostream>
using namespace std;
int main(){
    int row, col;
    cout << "Enter rows and columns of matrix: ";
    cin >> row >> col;
    int mat1[row][col];
    cout << "Enter elements of first matrix:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element at position (" << i+1 << "," << j+1 << "): ";
            cin >> mat1[i][j];
        }
    }
    int mat2[row][col];
    cout<< "Enter elements of second matrix: \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element at position (" << i+1 << "," << j+1 << "): ";
            cin >> mat2[i][j];
        }
    }
    int mat3[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "Row-wise addition of the matrices:\n";
    for(int i=0; i<row; i++){
        cout << "Row " << i+1 << ": ";
        for(int j=0; j<col; j++){
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}