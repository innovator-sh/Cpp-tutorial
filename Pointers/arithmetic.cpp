// Performing arithmetic operations using Pointer

#include <iostream>
using namespace std;

int main() {

    int a=50, b=10, add, sub, mul, div;
    int *p_a, *p_b;
    p_a = &a;
    p_b = &b;

    add = *p_a + *p_b;
    sub = *p_a - *p_b;
    mul = *p_a * *p_b;
    div = *p_a / *p_b;

    cout << "Addition : " << add << endl;
    cout << "Subtraction : " << sub << endl;
    cout << "Multiplication : " << mul << endl;
    cout << "Division : " << div;

    return 0;
}