// To count the number of spaces in a file.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

    char ch;
    int count=0;

    ifstream inf("xyz.txt");

    while(!inf.eof()) {
        inf.get(ch);
        if(ch == ' ') {
            count++;
        }
    }

    inf.close();

    cout << "Number of spaces : " << count << endl;

    return 0;
}