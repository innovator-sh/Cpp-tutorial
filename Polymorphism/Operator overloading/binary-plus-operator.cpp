/*
Let's take the following example,
*/

#include <iostream>
using namespace std;

class sum {
	int x, y;
public:
	void get(int a, int b) {
		x=a;
		y=b;
	}
	
	void display() {
		cout << x << "\n" << y << endl;
	}
	
	void operator+(sum &s){
		x = x + s.x;
		y = y + s.y;
		display();
	}
};

int main() {
	
	sum t1, t2;
	t1.get(70, 30);
	t2.get(30, 50);
	t1+t2;

    return 0;
}