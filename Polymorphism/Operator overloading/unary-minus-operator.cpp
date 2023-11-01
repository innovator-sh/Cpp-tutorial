/* 
To overload unary - operator
Let us take the following example.
Here, the the value of a and b will be changed to negative values.
*/

#include <iostream>
using namespace std;

class demo {
public:
    int a, b;

    demo(int x, int y) {
        a=x;
        b=y;
    }

    void display() {
        cout << "\nA : " << a << "\nB : " << b << endl;
    }

    void operator-() {
        a=-a;
        b=-b;
    }
};

int main() {
    demo d(5, 10);
    d.display();
    -d;
    d.display();

    return 0;
}