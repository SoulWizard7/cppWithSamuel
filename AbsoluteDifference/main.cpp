#include <iostream>
#include "AbsoluteDifference.h"

using namespace std;

int main() {

	int a;
	int b;

	cout << "type a number between -999999 and 999999" << endl;
	cin >> a;

	cout << endl;
	cout << "type another number between -999999 and 999999" << endl;
	cin >> b;
	
	cout << "absolute difference between " << a << " and " << b << " is: " << abs(a, b) << endl;
	cout << endl;
	

	return 0;
}