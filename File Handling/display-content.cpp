// To display the content of a file on the console.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

    char ch;

    ifstream inf("file.txt");

    while(!inf.eof()) {
        inf.get(ch); // To fetch the data
        cout << ch; // Display it on the console/terminal
    }

    inf.close();

    return 0;
}