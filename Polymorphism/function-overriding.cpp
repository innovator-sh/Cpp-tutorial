/* 
Here let's take the below example
The "display" function is overriding as the function with the same name exists in both, Base class and Derived class
The output would be "2" as we've created object of the derived class.
*/ 

#include <iostream>
using namespace std;

class abc {
public:
    int x;
    
    abc() { // Using default constructor
    	x=2;
    }
	
    void display() {
	cout << "Value of x: " << x << endl;
    }
};

class xyz : public abc {
public:
    int y;
    
    xyz(){
    	y=5;
    }
	
    void display() {
	cout << "Value of y: " << y;
    }
};

int main() {
    xyz ob;
    ob.display();

    return 0;
}
