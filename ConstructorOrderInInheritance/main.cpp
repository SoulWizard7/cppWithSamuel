#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include <functional>

using namespace std;

int doSomething(int a, int (*func)(int, int)) {
	return func(a, 12);
}

int doSomethingElse(int a, function<int(int, int)> func) {
	return func(a, 13);

}
//
//int doSomethingVirtual(Base* calculator) {
//	calculator->calculate();
//}

int add(int a, int b) {
	return a + b;
}

class Action {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

template<typename callback>
int templatedCallback(callback func) {
	int a = 10, int b = 66;
	func(a, b);
}


int main() {

	Action addFunctor;

	int x = 123;

	int a = doSomething(x, [](int a, int b) -> int {
		return a + b;
		});
	
	int b = doSomethingElse(x, addFunctor);
	int c = doSomethingElse(x, add);

	cout << a << endl;
	cout << b << endl;
	cout << c;

	return 0;
}