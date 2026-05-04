#pragma once
#include <string>
class Shape {
protected:
	std::string name_figure{};
public:
	Shape() = default;
	Shape(std::string _name);
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual std::string& get_name_figure() = 0;
	virtual ~Shape();
};