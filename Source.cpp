#include "Cylinder.hpp"
#include "Parallelepiped.hpp"
#include "Pyramid.hpp"
#include <fstream>
#include <vector>
#include <string>

int main()
{
	std::ifstream file;
	file.open("Date.in");
	std::vector<Shape*> shapes;
	std::vector <Shape3D*> shapes3D;
	std::string type;
	double coordinate1;
	double coordinate2;
	double radius;
	double height;
	while (!file.eof())
	{
		file >> type;
		if (type == "Rectangle")
		{
			file >> coordinate1>>coordinate2;
			Point leftBottom(coordinate1,coordinate2);
			file >> coordinate1 >> coordinate2;
			Point rightTop(coordinate1,coordinate2);
			shapes.push_back(new Rectangle(leftBottom, rightTop));
		}
		if (type == "Triangle")
		{
			file >> coordinate1 >> coordinate2;
			Point p1(coordinate1,coordinate2);
			file >> coordinate1 >> coordinate2;
			Point p2(coordinate1, coordinate2);
			file >> coordinate1 >> coordinate2;
			Point p3(coordinate1, coordinate2);
			shapes.push_back(new Triangle(p1, p2, p3));
		}
		if(type == "Circle")
		{
			file >> coordinate1 >> coordinate2;
			Point center(coordinate1, coordinate2);
			file >> radius;
			shapes.push_back(new Circle(center, radius));
		}
		if (type == "Parallelepiped")
		{
			file >> coordinate1 >> coordinate2;
			Point leftBottom(coordinate1, coordinate2);
			file >> coordinate1 >> coordinate2;
			Point rightTop(coordinate1, coordinate2);
			file >> height;
			shapes3D.push_back(new Parallelepiped(leftBottom, rightTop, height));
		}
		if (type == "Pyramid")
		{
			file >> coordinate1 >> coordinate2;
			Point p1(coordinate1, coordinate2);
			file >> coordinate1 >> coordinate2;
			Point p2(coordinate1, coordinate2);
			file >> coordinate1 >> coordinate2;
			Point p3(coordinate1, coordinate2);
			file >> height;
			shapes3D.push_back(new Pyramid(p1, p2, p3, height));
		}
		if (type == "Cylinder")
		{
			file >> coordinate1 >> coordinate2;
			Point center(coordinate1, coordinate2);
			file >> radius;
			file >> height;
			shapes3D.push_back(new Cylinder(center, radius, height));
		}
		
	}
	double totalArea = 0;
	for (auto shape : shapes)
	{
		totalArea += shape->area();
		shape->showType();
		std::cout <<"area: "<< shape->area() << std::endl;	
	}
	for (auto shape : shapes3D)
	{
		shape->showType();
		std::cout<<"area: "<<shape->area()<<std::endl;
		std::cout << "volume: " << shape->volume() << std::endl;

	}

	file.close();
	return 0;
}