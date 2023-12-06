#include <iostream>
using namespace std;
int main() {

    int a[2][2], b[2][2], c[2][2], i, j;

    cout << "Enter elements in matrix A :\n";
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    cin >> a[i][j];

    cout << "\nEnter elements in matrix B :\n";
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    cin >> b[i][j];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++) {
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    cout << "\n\nMultiplication of Matrix:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}