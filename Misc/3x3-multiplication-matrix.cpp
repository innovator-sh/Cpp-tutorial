#include <iostream>
using namespace std;

int main() {

    int a[3][3], b[3][3], c[3][3], i, j;

    cout << "Enter elements in A:\n";
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    cin >> a[i][j];

    cout << "\nEnter elements in B:\n";
    for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    cin >> b[i][j];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    cout << "\n\nMultiplication of matrix:\n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++) {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}