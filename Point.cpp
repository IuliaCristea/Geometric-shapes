#include "Point.hpp"

Point::Point(double x, double y) :
	_x(x),
	_y(y)
{}

Point::Point(const Point &newPoint) :
	_x(newPoint._x),
	_y(newPoint._y)
{}

double Point::distance(const Point &newPoint)
{
	return sqrt(pow((newPoint._x - _x),2) + pow((newPoint._y - _y),2));
}

double Point::getX()
{
	return _x;
}

double Point::getY()
{
	return _y;
}

Point::~Point()
{}
