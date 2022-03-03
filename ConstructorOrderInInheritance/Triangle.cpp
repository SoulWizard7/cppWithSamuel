#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle() {
	cout << "in triangle default constructor" << endl;
}

Triangle::Triangle(int side) : side(new int(side)) {
	cout << "in triangle parameterized constructor" << endl;
}

Triangle::Triangle(Triangle& source) {
	cout << "in triangle copy constructor" << endl;
	side = new int(*source.side);
}

Triangle::~Triangle() {
	cout << "in triangle destructor" << endl;
	delete side;
	side = nullptr;
}

int Triangle::getSide() { return *side; }

void Triangle::setSide(int side) { *this->side = side; }
