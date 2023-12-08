/* 
To find factorial of a number.
Eg: To find factorial of 5 = 1*2*3*4*5
*/
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Enter a number : ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        int result = factorial(num);
        cout << "\nFactorial of " << num << " is " << result;
    }

    return 0;
}