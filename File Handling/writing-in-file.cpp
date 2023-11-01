// To write in a file and read it by displaying on the console.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

    char str[50] = "Object oriented Programming";

    ofstream outf("text.txt");
    
    outf << str; //Writing data in the file

    outf.close();

    ifstream inf("text.txt", ios::in);

    cout << "Content in file: \n";
    while(!inf.eof()) {
        inf.getline(str, 50);
        cout << str << endl;
    }

    inf.close();

    return 0;
}