#include <iostream>

using namespace std;

void Recursion(int value, int firstNr, int secondNr);
void Iteration(int value, int firstNr, int secondNr);

int main() {

	cout << "write a number" << endl << endl;
	int value;
	cin >> value;
	int* ptr = &value;

	Recursion(value, 0, 1);
	cout << endl;
	Iteration(value, 0, 1);

	return 0;
}

void Recursion(int value, int firstNr, int secondNr) {
	cout << firstNr << ", ";

	int temp = secondNr;
	secondNr = firstNr + secondNr;
	firstNr = temp;

	if (secondNr < value) {
		Recursion(value, firstNr, secondNr);
	}
}

void Iteration(int value, int firstNr, int secondNr) {
	for (int i = 0; i < 1; i++)	{
		cout << firstNr << ", ";

		int temp = secondNr;
		secondNr = firstNr + secondNr;
		firstNr = temp;

		if (secondNr < value) {
			i--;
		}
	}
}