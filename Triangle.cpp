#include "Triangle.hpp"

Triangle::Triangle(const Point &p1, const Point &p2, const Point &p3) :
	_p1(p1),
	_p2(p2),
	_p3(p3)
{}

Triangle::Triangle(const Triangle &newTriangle) :
	_p1(newTriangle._p1),
	_p2(newTriangle._p2),
	_p3(newTriangle._p3)
{}

Point Triangle::getP1()
{
	return _p1;
}

Point Triangle::getP2()
{
	return _p2;
}

Point Triangle::getP3()
{
	return _p3;
}

double Triangle::area()
{
	return 0.5*abs(_p1.getX()*(_p2.getY() - _p3.getY()) + _p2.getX()*(_p3.getY() - _p1.getY()) + _p3.getX()*(_p1.getY() - _p2.getY()));
}

void Triangle::showType()
{
	std::cout << "Triangle" << std::endl;
}

Triangle::~Triangle()
{
}
