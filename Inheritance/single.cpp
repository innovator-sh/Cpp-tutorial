/*
Here we take the following example,
- Base class -
class name : furniture
members : material, price

- Derived class -
class name : details
members : height, area
*/

#include <iostream>
using namespace std;

class furniture {
protected:
    char material[30];
    float price;
public:
    void accept1(){
        cout << "Enter Furniture Material: ";
        cin >> material;
        cout << "Enter price: ";
        cin >> price;
    }
    void display1() {
        cout << "\n\nFurniture Material : " << material << "\nPrice : " << price << endl;
    }
};

class details : public furniture {
protected:
    float height, area;
public:
    void accept2() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter Surface Area: ";
        cin >> area;
    }
    void display2() {
        cout << "Height : " << height << "\nSurface Area : " << area << endl;
    }
};

int main () {
    details d;
    d.accept1();
    d.accept2();
    d.display1();
    d.display2();

    return 0;
}