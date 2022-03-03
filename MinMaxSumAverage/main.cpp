#include <iostream>

using namespace std;

template<typename T, size_t S>
void Sum(T(&arr)[S]) {

	int sum = 0;
	for (int i = 0; i < S; i++)
	{
		sum += arr[i];
	}
	cout << "Sum: " << sum << endl;
}

template<typename T, size_t S>
void LowestValue(T(&arr)[S]) {

	int value = arr[0];
	for (int i = 1; i < S; i++)
	{
		if (arr[i] < value) {
			value = arr[i];
		}
	}
	cout << "Lowest Value : " << value << endl;
}

template<typename T, size_t S>
void HighestValue(T(&arr)[S]) {

	int value = arr[0];
	for (int i = 1; i < S; i++)
	{
		if (arr[i] > value) {
			value = arr[i];
		}
	}
	cout << "Highest Value : " << value << endl;
}

template<typename T, size_t S>
void AverageValue(T(&arr)[S]) {

	float value = 0;
	for (int i = 0; i < S; i++)
	{
		value += arr[i];
	}
	value = value / S;
	
	cout << "Average Value : " << value << endl;
}

int main() {

	int arr[]{ 2,3,4,5,6,7,8,1 };
	int* ptr = arr;

	Sum(arr);
	LowestValue(arr);
	HighestValue(arr);
	AverageValue(arr);
}