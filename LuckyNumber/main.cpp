#include <iostream>
#include <vector>

using namespace std;

int main() {
	string value;
	cout << "Write any number: " << endl << endl;
	cin >> value;

	vector<char> numbers;
	bool isLucky = true;

	for (unsigned int i = 0; i < value.length(); i++)
	{
		char temp = value.at(i);
		bool add = false;

		for (unsigned int j = 0; j < numbers.size(); j++)
		{
			if (temp == numbers[j]) {
				isLucky = false;
				break;
			}
			else {
				add = true;
			}
		}

		if (add) {
			numbers.push_back(temp);
		}
		
		// for the first char only
		if (numbers.size() == 0) {
			numbers.push_back(temp);
		}

		if (!isLucky) {
			break;
		}
	}
	
	if (isLucky) {
		cout << value << " is a lucky number";
	}
	else {
		cout << value << " is NOT a lucky number";
	}

	cout << endl << endl;

	return 0;
}