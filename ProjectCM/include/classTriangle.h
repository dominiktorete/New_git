#pragma once
#include "classShape.h"

class Triangle : virtual public Shape {
	double side{};
	double higher{};
public:
	Triangle(double _side, double _higher, std::string name = "Triangle");
	double area() override;
	double perimeter() override;
	std::string& get_name_figure() override;
	~Triangle() override;
};