// To calculate the sum of elements in array

#include <iostream>
using namespace std;

int main() {

    int n, i, sum=0;

    cout << "Enter number of elements : ";
    cin >> n;

    int a[n];
    
    cout << "Enter elements in array :\n";
    for(i=0; i<n; i++)
    cin >> a[i];

    for(i=0; i<n; i++) {
        sum = sum+a[i];
    }

    cout << "\nSum of array : " << sum;

    return 0;
}