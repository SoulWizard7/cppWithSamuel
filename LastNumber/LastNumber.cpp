#include <iostream>
#include <string>

using namespace std;

int LastNr(int value) {
	string str = to_string(value);

	return str.at(str.length() - 1) - 48;
}

void EachNrSeparate(int value) {
	string str = to_string(value);

	for (int i = 0; i < str.length(); i++)
	{
		cout << str.at(i) - 48 << ", ";
	}
	cout << endl;
}

void ReverseNumbers(int value) {
	string str = to_string(value);
	
	cout << "the value in reverse is: ";

	for (int i = str.length() - 1; i >= 0; i--)
	{
		cout << str.at(i) - 48;
	}

}