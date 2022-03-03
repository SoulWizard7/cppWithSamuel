#include <iostream>
#include "EvenOrOdd.h"

using namespace std;

int main() {
	int value;

	cout << "type a number between -999999 and 999999" << endl;
	cin >> value;

	cout << value << " is an " << EvenOrOddString(value) << " number." << endl;
	cout << endl;

	return 0;
}