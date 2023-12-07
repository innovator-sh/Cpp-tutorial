/*
To overload binary + operator
Let's take the following example,
*/

#include <iostream>
using namespace std;

class Number {
	float a, b;
		
public:
	
	void accept() {
		cout << "Enter value of a : ";
		cin >> a;
		cout << "Enter value of b : ";
		cin >> b;
		cout << "\n";
	}
	void display() {
		cout << "A : " << a << "\nB : " << b << endl;
	}
	
	Number operator+(Number n){
		Number obj;
		a = a + n.a;
		b = b + n.b;
		
		obj.a = a;
		obj.b = b;
	
		return obj;
	}
};

int main() {

	Number n1, n2, n3;
	n1.accept();
	n2.accept();
	
	n3 = n1 + n2;
	
	cout << "\n\n";
	n3.display();
	
	return 0;
}