// To count the number of lines of data in a particular file.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

    char ch[80];
    int count=0;

    ifstream inf("abc.txt");

    while(!inf.eof()){
        inf.getline(ch, 80);
        count++;
    }

    inf.close();

    cout << "Number of lines : " << count << endl;

    return 0;
}