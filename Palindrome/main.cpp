#include <iostream>

using namespace std;


// Palindrome 
int main() {

	string value;

	cout << "write a palindrome" << endl;

	cin >> value;

	string newValue = value;

	for (int i = 0; i < value.length(); i++)
	{
		newValue.at(value.length() - i - 1) = value.at(i);
	}
	cout << endl << endl;

	if (value == newValue) {
		cout << value << " is a palindrome" << endl;	
	}
	else {
		cout << value << " is NOT a palindrome" << endl;
	}

	return 0;
}