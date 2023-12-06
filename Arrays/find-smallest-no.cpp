// Finding the smallest number in an Array.

#include <iostream>
using namespace std;

int main() {

    int n, i, j, temp;

    cout << "Enter number of elements : ";
    cin >> n;

    int a[n];

    cout << "Enter Elements in array :\n";
    for(i=0; i<n; i++)
    cin >> a[i];

    for(i=0; i<n; i++) {
        for(j=0; j<n-1-i; j++){
            
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
    }

    cout << "\nSmallest element in array : ";
    int smallest = 0;
    cout << a[smallest];

    return 0;
}
