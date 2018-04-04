#include "Shape.hpp"
#include "Point.hpp"

class Triangle : public Shape
{
protected:
	Point _p1;
	Point _p2;
	Point _p3;
public:
	Triangle(const Point &p1, const Point &p2, const Point &p3);
	Triangle(const Triangle &newTriangle);
	Point getP1();
	Point getP2();
	Point getP3();
	double area();
	void showType();
	~Triangle();
};

