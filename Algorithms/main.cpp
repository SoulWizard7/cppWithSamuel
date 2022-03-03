#include <iostream>

#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// FOR EACH LOOPS from lecture

int square(int& num) {
	return num *= num;
}

class Accumulator {
	int sum{ 0 };
public:
	int operator() (int value = 0) {
		return sum += value;
	}
	void reset() {
		sum = 0;
	}
};

int main() {
	vector<int> numbers{ 1,2,3,4,5,6,7,8,9, };

	for_each(numbers.begin(), numbers.end(), [](int& num) { num++; }); // lambda for each method
	cout << numbers[2] << endl;

	Accumulator sum;
	sum = for_each(numbers.begin(), numbers.end(), sum);
	cout << sum() << endl;


	int s{ 0 };
	for_each(numbers.begin(), numbers.end(), [&s](int n) {s += n; });

	//for_each(numbers.begin(), numbers.end(), square);
	cout << numbers[2] << endl;


	for (auto& val : numbers) {
		cout << ++val << " ";
	}

	cout << endl;


	//-------copy 

	int values[]{ 11,11,11,11,11 };
	numbers.resize(10);

	copy(begin(values), end(values), numbers.begin() + 5);
	copy(begin(values), end(values), back_insert_iterator<vector<int>>(numbers));

	cout << numbers[7] << endl;

	//----------------transform

	vector<int> output{ 13, 13 ,13, 13 };

	/*transform(numbers.begin(), numbers.begin() + 2, output.begin(), [](int source) {
		return source * source;
		});*/

	//extend list
	transform(numbers.begin(), numbers.begin() + 2, back_insert_iterator<vector<int>>(numbers), [](int source) {
		return source * source;
		});

	//------------------sorting

	vector<int> unsorted{ 23,63,14,54,74,54,87 };
	sort(unsorted.begin(), unsorted.end());


	return 0;
}