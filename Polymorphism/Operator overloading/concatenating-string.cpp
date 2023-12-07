// Concatenating two strings by overloading binary + operator

#include <iostream>
#include <string.h>
using namespace std;

class String {
public:
    char str[20];

    void accept() {
        cout << "Enter String : ";
        cin >> str;
    }

    void display() {
        cout << endl << str;
    }

    String operator+(String s){
        String obj;
        strcat(str, s.str);
        strcpy(obj.str, str);

        return obj;
    }

};

int main() {

    String s1, s2, s3;

    s1.accept();
    s2.accept();

    s3 = s1 + s2;

    cout << "\nConcatenated String:";
    s3.display();

    return 0;
}