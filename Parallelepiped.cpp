#include "Parallelepiped.hpp"



Parallelepiped::Parallelepiped(const Point &leftBottom, const Point &rightTop, const double &height) :
	Rectangle(leftBottom,rightTop)
{
	_height = height;
}

Parallelepiped::Parallelepiped(const Parallelepiped &toCopy) :
	Rectangle(toCopy)
{
	_height = toCopy._height;
}

double Parallelepiped::area()
{
	return 2 * (Rectangle::area() + (_rightTop.getX() - _leftBottom.getX())*_height +  (_rightTop.getY() - _leftBottom.getY())*_height);
}

double Parallelepiped::volume()
{
	return Rectangle::area()*_height;
}

void Parallelepiped::showType()
{
	std::cout << "Parallelepiped" << std::endl;
}

Parallelepiped::~Parallelepiped()
{
}
