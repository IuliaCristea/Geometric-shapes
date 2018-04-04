#include "Cylinder.hpp"



Cylinder::Cylinder(const Point &center, const double &radius, const double &height) : 
	Circle(center, radius) 
{
	_height = height;
}

Cylinder::Cylinder(const Cylinder &newCylinder) :
	Circle(newCylinder)
{
	_height = newCylinder._height;
}

double Cylinder::area()
{
	return 2*_height*_radius*PI + Circle::area();
}

double Cylinder::volume()
{
	return _height * Circle::area();
}

void Cylinder::showType()
{
	std::cout << "Cylinder"<<std::endl;
}

Cylinder::~Cylinder()
{}
