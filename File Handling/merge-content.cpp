// To merge data of file two files into one new file.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

    char ch;

    ifstream inf1("abc.txt");
    ofstream outf("merge.txt", ios::app);

    while(!inf1.eof()) {
        inf1.get(ch);
        outf.put(ch);
    }
    inf1.close();

    ifstream inf2("xyz.txt");

    while(!inf2.eof()) {
        inf2.get(ch);
        outf.put(ch);
    }
    inf2.close();
    outf.close();

    cout << "Merge task completed.";

    return (0);
}
