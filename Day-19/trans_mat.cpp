#include <iostream>
using namespace std;
int main(){
    int row, col;
    cout << "Enter rows and columns of matrix: ";
    cin >> row >> col;
    int mat[row][col];
    cout << "Enter elements of  matrix:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> mat[i][j];
        }
    }
    int mat_transpose[col][row];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mat_transpose[j][i] = mat[i][j];
        }
    }
    cout << "Transpose of the matrix:\n";
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout << mat_transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}