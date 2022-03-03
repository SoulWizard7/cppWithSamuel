#include <iostream>
#include "LastNumber.h"

using namespace std;


int main(){	

	int value;
	cout << "type a number between 0 and 999999" << endl;

	cin >> value;

	cout << "last nr of " << value << " is: " << LastNr(value) << endl;

	cout << "numbers in " << value << " are: ";
	EachNrSeparate(value);

	ReverseNumbers(value);

	cout << endl << endl << endl;

	return 0;
}