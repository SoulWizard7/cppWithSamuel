#pragma once
class Triangle
{
	int* side = new int(4);

public:
	Triangle();

	Triangle(int side);

	Triangle(Triangle& source);

	~Triangle();

	int getSide();

	void setSide(int side);
};

