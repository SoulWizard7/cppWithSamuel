#include <iostream>

#include <thread>

using namespace std;
using namespace std::this_thread;

int main() {

	string input;
	cout << "Write a word " << endl << endl;
	cin >> input;
	cout << endl << endl;

	for (int i = input.length() - 1; i >= 0; i--)
	{
		sleep_for(350ms);
		cout << input.at(i);		
	}

	cout << endl << endl;

	sleep_for(2000ms);

	return 0;
}