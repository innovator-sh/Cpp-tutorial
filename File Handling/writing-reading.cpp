/* To write data in a file and read it.
Let's take an example for student.txt file
*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

    char name[20];
    int id;

    ofstream outf("student.txt");

    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;

    //Writing data in the file
    outf << name;
    outf << "\n";
    outf << id;
    
    outf.close();

    ifstream inf("student.txt");
    inf >> name;
    inf >> id;

    inf.close();
    
    cout << "\nStudent Name: " << name << "\nID: " << id << endl;

    return 0;
}