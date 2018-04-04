#pragma once
#include "Rectangle.hpp"
#include "Shape3D.hpp"

class Parallelepiped : public virtual Rectangle, public virtual Shape3D
{
public:
	Parallelepiped(const Point &leftBottom, const Point &rightTop, const double &height);
	Parallelepiped(const Parallelepiped &toCopy);
	double area();
	double volume();
	void showType();
	~Parallelepiped();
};

