#include <iostream>
using namespace std;

class student {
public:
	char name[20];
	int roll;
	
	void accept1() {
		cout << "Enter student name: ";
		cin >> name;
		cout << "Enter roll: ";
		cin >> roll;
	}
};

class test : public student {
public:
	int m1, m2;
	
	void accept2(){
		cout << "Enter mark1 and mark2:\n";
		cin >> m1 >> m2;
	}
};

class result : public test {
	int total;
public:
	void display() {
		total = m1+m2;
		cout << "\nStudent Name : " << name << endl << "\nRoll : " << roll << endl;
		cout << "\nMarks 1 : " << m1 << "\nMarks 2 : " << m2;
		cout << "\nTotal : " << total << " / 200";
	}
};

int main () {
    
    result r;
    r.accept1();
    r.accept2();
    r.display();

    return 0;
}