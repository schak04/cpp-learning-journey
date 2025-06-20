#include <iostream>
using namespace std;

/* Program that takes 2 matrices and prints their addition */

int main(){
    int matrix1[2][2], matrix2[2][2], sumMatrix[2][2];

    cout<<"Enter elements for the first matrix:"<<endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter elements for the second matrix:"<<endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cin>>matrix2[i][j];
        }
    }

    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            sumMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    
    cout<<"Addition of the two matrices gives us the matrix:"<<endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout<<sumMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}