#pragma once
#include "Shape.hpp"
#include "Point.hpp"
#define PI 3.141592653589793238463;

class Circle : public Shape
{
protected:
	Point _center;
	double _radius;
public:
	Circle(const Point &center, const double &radius);
	Circle(const Circle &newCircle);
	Point getCenter();
	double getRadius();
	double area();
	void showType();
	~Circle();
};

