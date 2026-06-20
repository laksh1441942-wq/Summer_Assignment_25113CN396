#include <iostream>
using namespace std;
int main(){
    int row1, col1;
    cout << "Enter rows and columns of first matrix: ";
    cin >> row1 >> col1;
    int row2, col2;
    cout << "Enter rows and columns of second matrix: ";
    cin >> row2 >> col2;
    if(col1 != row2){
        cout << "Matrix cannot be multiplied\n";
        return 1;
    }
    int mat1[row1][col1];
    cout << "Enter elements of first matrix:\n";
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            cout<<"Enter element at position (" << i+1 << "," << j+1 << "): ";
            cin >> mat1[i][j];
        }
    }
    int mat2[row2][col2];
    cout<< "Enter elements of second matrix: \n";
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            cout<<"Enter element at position (" << i+1 << "," << j+1 << "): ";
            cin >> mat2[i][j];
        }
    }
    int mat3[row1][col2];
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            mat3[i][j]=0;
            for(int k=0; k<col1; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "Product of the matrices:\n";
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}