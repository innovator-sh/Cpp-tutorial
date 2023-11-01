/*
Here, let's take an example of adding two numbers.
*/

#include <iostream>
using namespace std;

inline int add(int a, int b){
    return a+b;
}

int main() {
    int t, a=10, b=5;

    t = add(a, b);

    cout << "Total : " << t << endl;

    return 0;
}