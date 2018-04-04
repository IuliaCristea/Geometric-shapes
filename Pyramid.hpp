#pragma once
#include "Triangle.hpp"
#include "Shape3D.hpp"

class Pyramid : public virtual Triangle, public virtual Shape3D
{
public:
	Pyramid(const Point &p1, const Point &p2, const Point &p3, const double &height);
	Pyramid(const Pyramid &toCopy);
	double area();
	double volume();
	void showType();
	~Pyramid();
};

