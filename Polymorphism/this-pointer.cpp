/*
Here let's take an example of a student's details.
We use the "this" keyword to point to the variable
*/

#include <iostream>
#include <string.h>
using namespace std;

class student {
    int id;
    char name[30]; 

public:

    student(int id, char name[]) {
    	this->id = id;
    	strcpy(this->name, name);
	}

    void display() {
        cout << "\nStudent ID: " << this->id << endl;
        cout << "Name: " << this->name << endl;
    }
};

int main() {
    student s(106, "Bjarne");
    s.display();

    return 0;
}