// Swapping two digit's values using Pointer.

#include <iostream>
using namespace std;

int main() {

    int a=10, b=20, temp;
    int *p_a, *p_b;

    p_a = &a;
    p_b = &b;

    cout << "A : " << *p_a << "\nB : " << *p_b << endl;

    temp = *p_a;
    *p_a = *p_b;
    *p_b = temp;

    cout << "\nValues after Swapping:\n";
    cout << "A : " << *p_a << "\nB : " << *p_b;

    return 0;
}