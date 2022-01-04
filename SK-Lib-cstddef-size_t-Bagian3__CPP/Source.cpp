
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	string str = "Rizky khapidsyah";
	char c = 'd';

	// Find first occurrence of 'g'
	size_t found = str.find(c);

	if (found != string::npos) {
		cout << "First occurrence is " << found << endl;
	}
		

	// Find next occurrence of 'g'
	found = str.find(c, found + 1);

	if (found != string::npos) {
		cout << "Next occurrence is " << found << endl;
	}
		

	_getch();
	return 0;
}
