// Finding the sum of all the elements in an Array using Pointer.

#include <iostream>
using namespace std;

int main() {

    int i, sum=0, *p;
    int a[] = {1, 2, 3, 4, 5};

    p = &a[i];

    for(i=0; i<5; i++) {
        sum = sum + *p;
        p++;
    }

    cout << "Sum of elements : " << sum;

    return 0;
}