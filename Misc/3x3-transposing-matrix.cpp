#include <iostream>
using namespace std;

int main() {

    int a[3][3], i, j;

    cout << "Enter elements in matrix :\n";
    for(i=0; i<3;i++)
    for(j=0; j<3; j++) 
    cin >> a[i][j];

    cout << "\n\nTransposed Matrix:\n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }

    return 0;
}