#pragma once

#include <iostream>
#include <cmath>

class Point
{
protected:
	double _x;
	double _y;
public:
	Point(double x = 0, double y = 0);
	Point(const Point &newPoint);
	double distance(const Point &newPoint);
	double getX();
	double getY();
	~Point();
};

