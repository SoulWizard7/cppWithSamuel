#include <iostream>

using namespace std;


// LINEAR SEARCH 
int main() {

	int numbers[]{ 5, 6, 22, 32, 5, 65, 7, 2, 5 , 1 ,2 ,3 ,4 ,5, 5, 6, 7, 8, 6, 4, 7, 6, 89, 65, 34, 54, 65, 76, 87, 98, 45, 34, 52, 15, 37, 7, 34 };
	int value;

	cout << "What number do you want to find?" << endl;

	cin >> value;

	cout << "Your input " << value << " was found at positions: ";

	for (int i = 0; i < size(numbers); i++)
	{
		if (numbers[i] == value) {
			cout << i << ", ";
		}		
	}

	cout << endl;

	return 0;
}