
#include <string>

using namespace std;

string EvenOrOddString(int value) {
	if (value % 2 == 0) {
		return "even";
	}
	else return "odd";
}

bool EvenOrOdd(int value) {
	if (value % 2 == 0) {
		return true;
	}
	else return false;
}