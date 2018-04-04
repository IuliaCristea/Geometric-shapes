#include "Circle.hpp"



Circle::Circle(const Point &center, const double &radius) :
	_center(center),
	_radius(radius)
{}

Circle::Circle(const Circle & newCircle) :
	_center(newCircle._center),
	_radius(newCircle._radius)
{}

Point Circle::getCenter()
{
	return _center;
}

double Circle::getRadius()
{
	return _radius;
}

double Circle::area()
{
	return _radius*_radius*PI;
}

void Circle::showType()
{
	std::cout << "Circle" << std::endl;
}

Circle::~Circle()
{}
