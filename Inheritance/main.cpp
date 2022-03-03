#include <iostream>
using namespace std;

class Base {
public:
	/*virtual void message() {
		cout << "hello from base class" << endl;
	}*/
	virtual void message() = 0;
	virtual void otherMsg() {
		cout << "helo" << endl;
	}
};

class Derived : public Base {
public:
	void message() {
		cout << "hello from derived class" << endl;
	}


};

int main() {
	//Derived d;
	//d.message();

	Base* bptr = new Derived;

	bptr->message();
	bptr->otherMsg();

	return 0;
}