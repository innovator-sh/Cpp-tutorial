// To sort elements in an array

#include <iostream>
using namespace std;

int main() {

    int i, j, n, temp;

    cout << "Enter number of elements : ";
    cin >> n;

    int a[n];

    cout << "Enter array elements :\n";
    for(i=0; i<n; i++) {
        cin >> a[i];
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n-1-i; j++) {

            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout << "\nSorted array : \n";
    for(i=0; i<n; i++) {
        cout << a[i] << "\t";
    }

    return 0;
}