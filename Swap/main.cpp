#include <iostream>

using namespace std;

int main() {

	int a = 14;
	int b = 16;

	cout << "a = " << a << ", b = " << b << endl;

	int& aRef = a;
	int& bRef = b;

	int temp = aRef;
	aRef = bRef;
	bRef = temp;

	cout << "a = " << a << ", b = " << b << endl << endl;



	int c = 17;
	int d = 19;

	cout << "c = " << c << ", d = " << d << endl;

	int* cPtr = &c;
	int* dPtr = &d;

	int temp2 = *cPtr;
	c = *dPtr;
	d = temp2;

	cout << "c = " << c << ", d = " << d << endl << endl;


	int e = 3;
	int f = 4;

	cout << "e = " << e << ", f = " << f << endl;

	e = e + f;
	f = e - f;
	e = e - f;

	cout << "e = " << e << ", f = " << f << endl << endl;

}