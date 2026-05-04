#pragma once
#include "classShape.h"
class Rectangle : virtual public Shape {
	double width{}, height{};
public:

	Rectangle(double _width, double _height, std::string name);
	Rectangle(double _width, double _height);
	double area() override;
	double perimeter() override;
	std::string& get_name_figure() override;
	~Rectangle() override;
};