#include <iostream>

using namespace std;


void ArithProg() {

	int a, b, c, d;

	cout << "Input nr" << endl;
	cin >> a;
	cout << "Input another nr" << endl;
	cin >> b;
	cout << "Input yet another nr" << endl;
	cin >> c;
	cout << "Input last nr" << endl;
	cin >> d;

	int difference = a - b;

	if (b - c == difference) {
		if (c - d == difference) {
			cout << a << ", " << b << ", " << c << " and " << d << " have a Arithmetic Progression" << endl;
		}
	}
	else {
		cout << a << ", " << b << ", " << c << " and " << d << " does not have a Arithmetic Progression" << endl;
	}

}