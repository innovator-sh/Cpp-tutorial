// Finding the number of Vowels and Consonants in a string

#include <iostream>
using namespace std;

int main(){

	char str[30];
	int i, v=0, c=0;
	
    cout << "Enter the String : ";
    cin >> str;
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
			v++;
		} else {
			c++;
		}
	}
	
    cout << "\nNumber of Vowels : " << v << endl;
	cout << "Number of Consonants : " << c;
	
	return 0;
}