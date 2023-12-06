/*
To swap numbers using Friend function
*/
#include <iostream>
using namespace std;

class num1;
class num {
    int a=10;
    friend void swap (num, num1);
};

class num1 {
    int b=20;
    friend void swap (num, num1);
};

void swap(num t1, num1 t2) {
    int temp;
    temp = t1.a;
    t1.a = t2.b;
    t2.b = temp;
};

int main() {
    num x;
    num1 y;

    swap (x, y);

    return 0;
}


/*
To find smallest number using friend function

#include <iostream>
using namespace std;
class smallest1;
class smallest {
    int n1=50;
    friend void small(smallest, smallest1);
};
class smallest1 {
    int n2=40;
    friend void small(smallest, smallest1);
};

void small(smallest s1, smallest1 s2) {
    if(s1.n1 < s2.n2) {
        cout << "Smallest number : " << s1.n1;
    } else {
        cout << "Smallest number : " << s2.n2;
    }
};

int main() {
    smallest x;
    smallest1 y;

    small(x, y);

    return 0;
}
*/