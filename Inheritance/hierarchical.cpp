#include <iostream>
using namespace std;

class company {
    char cname[20], location[20];
public:
    void accept1() {
        cout << "Enter Company name: ";
        cin >> cname;
        cout << "Enter location: ";
        cin >> location;
    }

    void display1() {
        cout << "\nCompany Name : " << cname << "\nLocation : " << location << endl;
    }
};

class employee : public company {
    int eid;
    char ename[20];
public:
    void accept2() {
        cout << "Enter Employee ID: ";
        cin >> eid;
        cout << "Enter Name: ";
        cin >> ename;
    }
    void display2() {
        cout << "\nEmployee ID : " << eid << "\nName : " << ename << endl;
    }
};

class customer : public company {
    char customer_name[20];
    int no_of_orders;
public:
    void accept3() {
        cout << "Enter Customer Name: ";
        cin >> customer_name;
        cout << "Enter Number of orders: ";
        cin >> no_of_orders;
    }
    void display3() {
        cout << "\nCustomer Name : " << customer_name << "\nNo. of Orders : " << no_of_orders << endl;
    }
};

int main() {

    customer c;
    employee e;
    c.accept1();
    e.accept2();
    c.accept3();

    c.display1();
    e.display2();
    c.display3();

    return 0;
}