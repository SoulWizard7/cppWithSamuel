#pragma once

class Rectangle {
	int* x = new int(2);
	int* y = new int(3);
public:
	Rectangle();

	Rectangle(int x, int y);
	
	Rectangle(Rectangle& source);

	~Rectangle();

	Rectangle& operator = (Rectangle& right_operand);

	int getX();
	int getY();

	void setX(int x);
	void setY(int y);
	Rectangle& add(Rectangle& other);

	bool isSquare();
};