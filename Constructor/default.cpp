// Example for Default constructor

#include <iostream>
using namespace std;

class test {
public:

    int a, b;

    test () {
        a=5;
        b=10;
    }

    void display() {
        cout << "A : " << a << "\nB : " << b;
    }
};

int main() {

    test t;
    t.display();

    return 0;
}