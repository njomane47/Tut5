#include "shape.h"
#include <iostream>
using namespace std;
shape::shape(string name)
{
	shapename = name;
}

void shape::print()
{
   cout << "Shape name is: " << shapename;
}

Rectangle::Rectangle(string name, float B, float L)
	:shape(name)
{
	setDim(L, B, 0);
}

void Rectangle::setDim(float l, float b, float y)
{
	L = l;
	W = b;
}

void Rectangle::perimeter(void)
{
	r_area = 2*(L+W);
	cout << "Area of rectangle: \n" << r_area << endl;
}


void Rectangle::Area(void)
{
	r_area = L*W;
	cout << "Area of rectangle: \n" << r_area << endl;
}

Circle::Circle(string name, float R)
	:shape(name)
{
	setDim(R, 0, 0);
}

void Circle::setDim(float rad, float zee, float rho)
{
	R = rad;
}

void Circle::Area(void)
{
	c_area = pi*R*R;
	cout << "Area of Circle: " << c_area << endl;
}

Triangle::Triangle(string name, float H, float b)
	: shape(name)
{
	setDim(H, b, 0);
}

void Triangle::setDim(float h, float B, float x)
{
	H = h;
	b = B;
}

void Triangle::perimeter(float h, float B, float x)
{
	t_perimeter = (h+B+x);
	cout << "perimeter of triangle: " << t_perimeter << endl;
}

void Triangle::Area(void)
{
	t_area = 0.5*b*H;
	cout << "Area of triangle: " << t_area << endl;
}
