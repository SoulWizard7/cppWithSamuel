#include <iostream>

using namespace std;

int abs(int a, int b) {

	int x{};
	int y{};

	if (a < 0) {
		x = -a;
		if (b < 0) {
			y = -b;
			return x - y;
		}
		else {
			y = b;
			return x + y;
		}
	}
	else {
		x = a;
		if (b < 0) {
			y = -b;
			return x + y;
		}
		else {
			y = b;
			return x - y;
		}
	}
}