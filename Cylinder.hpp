#pragma once
#include "Circle.hpp"
#include "Shape3D.hpp"

class Cylinder : public virtual Circle, public virtual Shape3D
{
public:
	Cylinder(const Point &center, const double &radius, const double &height);
	Cylinder(const Cylinder &newCylinder);
	double area();
	double volume();
	void showType();
	~Cylinder();
};

