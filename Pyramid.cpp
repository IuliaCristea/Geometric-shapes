#include "Pyramid.hpp"



Pyramid::Pyramid(const Point &p1, const Point &p2, const Point &p3, const double &height) :
	Triangle(p1,p2,p3)
{
	_height = height;
}

Pyramid::Pyramid(const Pyramid &toCopy) :
	Triangle(toCopy)
{
	_height = toCopy._height;
}

double Pyramid::area()
{
	//Just for practice;
	throw "Not implemented yet";
}

double Pyramid::volume()
{
	//Just for practice;
	throw "Not implemented yet";
}

void Pyramid::showType()
{
	std::cout << "Pyramid" << std::endl;
}

Pyramid::~Pyramid()
{
}
