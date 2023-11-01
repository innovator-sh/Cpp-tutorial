// To copy content of one file to another file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	ifstream inf("file1.txt");
	ofstream outf;
	outf.open("file2.txt");
	
	char ch;
	
	while(!inf.eof()) {
		inf.get(ch);
		outf.put(ch);
	}
    
	inf.close();
	outf.close();

    cout << "Copy successful.";
	
	return 0;
}