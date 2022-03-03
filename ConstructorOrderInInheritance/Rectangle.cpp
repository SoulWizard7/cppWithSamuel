#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
	cout << "in rectangle default constructor" << endl;
}

Rectangle::Rectangle(int x, int y) : x(new int(x)), y(new int(y)) {
	cout << "in rectangle parameterized constructor" << endl;
}

Rectangle::Rectangle(Rectangle& source){
	cout << "in rectangle copy constructor" << endl;
	x = new int(*source.x);
	y = new int(*source.y);
}

Rectangle::~Rectangle(){
	cout << "in rectangle destructor" << endl;
	delete x;
	delete y;
}
Rectangle& Rectangle::operator = (Rectangle& right_operand) {
	cout << "in rectangle copy assignment" << endl;
	delete x;
	delete y;
	x = new int(*right_operand.x);
	y = new int(*right_operand.y);
	return *this;
}



Rectangle& Rectangle::add(Rectangle& other) {

	*x += *(other.x);
	*y += *(other.y);
	return *this;
}

void Rectangle::setX(int x) { *this->x = x; }
void Rectangle::setY(int y) { *this->y = y; }

int Rectangle::getX() { return *x; }
int Rectangle::getY() { return *y; }

bool Rectangle::isSquare(){	return *x == *y;}


