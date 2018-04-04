#pragma once
#include "Shape.hpp"
class Shape3D : public Shape
{
protected:
	double _height;
public:
	virtual double volume() = 0;
	inline double getHeight()
	{
		return _height;
	}

};

