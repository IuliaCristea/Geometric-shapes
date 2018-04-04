#include "Shape.hpp"
#include "Point.hpp"
class Rectangle : public Shape
{
protected:
	Point _leftBottom;
	Point _rightTop;
public:
	Rectangle(const Point &lb, const Point &rt);
	Rectangle(const Rectangle &newRectange);
	Point getLeftBottom();
	Point getRightTop();
	double area();
	void showType();
	~Rectangle();
};

