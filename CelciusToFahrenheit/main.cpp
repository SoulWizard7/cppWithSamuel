#include <iostream>
#include "CelToFahr.h"

using namespace std;

int main() {

	float cel;

	cout << "what is todays temperature ?" << endl;
	cin >> cel;

	if (cel < -273.15f) {
		cout << "it is not possible to be that cold, tell the truth next time" << endl;
		return 0;
	}

	cout << "todays temperature in Fahrenheit is: " << CelToFahr(cel) << endl;
	cout << endl;

	return 0;
}