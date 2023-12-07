/*
Let us take the below example,
Here, both the classes have a "print" function with the same name. And due to the usage of "virtual" keyword in the base class' function, 
the compiler will display the message of the derived class' function.
Read that again.
*/

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() {
		cout << "Print base class.\n";
	}
};

class derived : public base {
public:
	void print() {
		cout << "Print derived class.\n";
	}
};

int main() {
	
	base *p;
	derived d;
	
	p=&d;
	
	p->print();
	//p->show();

	return 0;
}