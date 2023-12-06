// To find whether a number is even or odd.

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter number : ";
    cin >> num;

    if(num % 2 == 0) {
        cout << "\nNumber is even.";
    } else {
        cout << "\nNumber is odd.";
    }

    return 0;
}