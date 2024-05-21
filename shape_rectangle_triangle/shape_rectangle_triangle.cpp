// shape_rectangle_triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
	float height;
public :
	void setHeight(float h) {
		height = h;
	}
	float getHeight() {
		return height;
	}
	virtual float calcArea() {
		return 0.0;
	}
};
class Rectangle : public Shape {
	float with;
public :
	float getWith() {
		return with;
	}

	void setWith(float w) {
		with = w;
	}

	float calcArea()  {
		return with * getHeight();
	}

};

class Triangle : public Shape {
	float Base;
public:
	float getBase() {
		return Base;
	}

	void setBase(float w) {
		Base = w;
	}

	float calcArea() {
		return 0.5 * Base * getHeight();
	}
};
int main()
{
	Rectangle rect;
	rect.setWith(10);
	rect.setHeight(5);
	cout << "Rectangle area: " << rect.calcArea() << endl;

	Triangle tri;
	tri.setBase(10);
	tri.setHeight(5);
	cout << "Triangle area: " << tri.calcArea() << endl;

	return 0;
}
