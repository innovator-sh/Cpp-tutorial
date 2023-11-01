#include <iostream>
using namespace std;

class science {
public:
    int s_marks;

    void accept1() {
        cout << "Enter Science Marks: ";
        cin >> s_marks;
    }
};

class math {
public:
    int m_marks;

    void accept2() {
        cout << "Enter Math Marks: ";
        cin >> m_marks;
    }
};

class total : public science, public math {
public:
    int total;

    void display() {
        total = s_marks + m_marks;
        cout << "\nScience Marks : " << s_marks << "\nMath Marks : " << m_marks;
        cout << "\n\nTotal : " << total << " / 200";
    }
};

int main() {
    total t;
    t.accept1();
    t.accept2();
    t.display();

    return 0;
}