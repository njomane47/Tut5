#include "shape.h"
#include <iostream>
using namespace std;

int main()
{
	Circle c("circle", 7);
	c.Area();
	Triangle t("Triangle", 6, 12);
	t.Area();
	Rectangle r("Rectangle", 8, 30.0);
	r.Area();

	return 0;
}