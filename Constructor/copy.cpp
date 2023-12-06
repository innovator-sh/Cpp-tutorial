// Example for Copy constructor

#include <iostream>
using namespace std;

class test {
public:

    int a, b;

    test (int x, int y) {
        a=x;
        b=y;
    }

    test(test &obj) {
        a = obj.a;
        b = obj.b;
    }

    void display() {
        cout << endl << "A : " << a << "\nB : " << b;
    }
};

int main() {

    test t1(10, 20);
    test t2(t1);

    t1.display();
    t2.display();

    return 0;
}