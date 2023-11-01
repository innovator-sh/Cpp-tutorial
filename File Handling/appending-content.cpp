/* To append data into a file.
Append : Adding data to a file at the end without replacing or overwriting the existing content
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {

    ifstream inf("file.txt", ios::in);
    ofstream outf("appenddata.txt", ios::app);

    char ch;

    while(!inf.eof()) {
        inf.get(ch);
        outf.put(ch); // OR outf << ch;
    }

    inf.close();
    outf.close();

	cout << "Successfully appended data.";

    return 0;
}