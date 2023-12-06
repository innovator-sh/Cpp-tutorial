// Example for Parameterized constructor

#include <iostream>
using namespace std;

class test {
public:

    int a, b;

    test (int x, int y) {
        a=x;
        b=y;
    }

    void display() {
        cout << "A : " << a << "\nB : " << b;
    }
};

int main() {

    test t(10, 20);
    t.display();

    return 0;
}