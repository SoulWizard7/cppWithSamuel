#include <iostream>

using namespace std;

template<typename T>
void Swap(T a, T b) {
	auto temp = a;
	a = b;
	b = temp;
}

int main() {

	int x = 13;
	int y = 15;

	Swap(x, y);

	cout << x << ", " << y << endl;

	string s1 = "bang";
	string s2 = "yellow";

	cout << &s1 << ", " << &s2 << endl;

	Swap(s1, s2);

	cout << s1 << ", " << s2 << endl;
	cout << &s1 << ", " << &s2 << endl;

	return 0;
}