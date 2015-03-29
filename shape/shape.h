#include<string>
#include<cmath>
#define pi 3.141592654
#pragma once

using namespace std;

class shape
{
public:
	shape(string);
	void print();
	virtual void setdim(float, float, float);
	virtual void perimeter() = 0;
	virtual void area() = 0;

private:
	string shapename;
};

class Rectangle :public shape
{
public:
	Rectangle(string, float, float);
	virtual void setDim(float, float, float);
	virtual void perimeter();
	virtual void Area();

private:
	float W;
	float L;
	float r_area;
	float r_perimeter;
};

class Circle :public shape
{
public:
	Circle(string, float);
	virtual void setDim(float, float, float);
	virtual void Area();
private:
	float R;
	float c_area;
};

class Triangle :public shape
{
public:
	Triangle(string, float, float);
	virtual void setDim(float, float, float);
	virtual void Area();
	virtual void perimeter(float , float , float );

private:
	float H;
	float b;
	float t_area;
	float t_perimeter;
};