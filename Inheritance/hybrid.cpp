#include <iostream>
using namespace std;

class student {
public:
    int roll;
    char name[20];

    void accept1() {
        cout << "Enter Student roll no: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
};

class math : virtual public student {
public:
    int algebra, geometry;
    void accept2() {
        cout << "Enter Algebra and Geometry marks:\n";
        cin >> algebra >> geometry;
    }
};

class science : virtual public student {
public:
    int physics, chemistry;
    void accept3() {
        cout << "Enter Physics and Chemistry marks:\n";
        cin >> physics >> chemistry;
    }
};

class total : public math, public science {
    int total;
public:
    void display() {
        total = algebra + geometry + physics + chemistry;
        cout << "\nStudent Roll : " << roll << "\nName : " << name << endl;
        cout << "\nMarks of -\nPhysics : " << physics << "\nChemistry : " << chemistry << endl;
        cout << "Geometry : " << geometry << "\nAlgebra : " << algebra << endl;
        cout << "\nTotal : " << total << " / 400";
    }
};

int main() {
    total t;
    t.accept1();
    t.accept2();
    t.accept3();
    t.display();

    return 0;
}