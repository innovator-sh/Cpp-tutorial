// Here let's take an example of addition of numbers

#include <iostream>
using namespace std;

class sum {
public:
    void add(int a, int b){
        cout << "Addition of two integers : " << a+b << endl;
    }
    void add(int a, int b, int c) {
        cout << "Addition of three integers : " << a+b+c << endl;
    }
    void add(float a, float b, float c, float d) {
        cout << "Addition of four float numbers : " << a+b+c+d << endl;
    }
};

int main() {
    sum s;
    s.add(10,5);
    s.add(15, 2, 10);
    s.add(0.5, 2.5, 7.5, 4.5);

    return 0;
}