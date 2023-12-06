#include <iostream>
using namespace std;

int main() {
    
    int i, num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "\nMultiplication of " << num << endl;
    for(i=1; i<=10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}