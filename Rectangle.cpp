#include "Rectangle.hpp"

Rectangle::Rectangle(const Point &lb, const Point &rt) :
	_leftBottom(lb),
	_rightTop(rt)
{}

Rectangle::Rectangle(const Rectangle &newRectangle) :
	_leftBottom(newRectangle._leftBottom),
	_rightTop(newRectangle._rightTop)
{}

Point Rectangle::getLeftBottom()
{
	return _leftBottom;
}

Point Rectangle::getRightTop()
{
	return _rightTop;
}

double Rectangle::area()
{
	return ((_rightTop.getX() - _leftBottom.getX())*(_rightTop.getY() - _leftBottom.getY()));

}

void Rectangle::showType()
{
	std::cout << "Rectangle" << std::endl;
}

Rectangle::~Rectangle()
{
}
