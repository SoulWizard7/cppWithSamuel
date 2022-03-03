#include <iostream>
using namespace std;

int main() {
		
	char single;
	cout << "Write a single digit nr" << endl << endl;
	cin >> single;

	string multiple;
	cout << "Write a multiple digit nr" << endl << endl;
	cin >> multiple;

	for (size_t i = 0; i < multiple.length(); i++)
	{		
		if (single == multiple.at(i)) {
			cout << "number " << single << " is in " << multiple << endl;
		}
	}

	return 0;
}