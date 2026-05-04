#include "classTriangle.h"
#include <iostream>
Triangle::Triangle(double _side, double _higher, std::string name) : Shape(name), side(_side), higher(_higher) {}

double Triangle::area() {
	return (side * higher) / 2.0;
}
double Triangle::perimeter() {
	return (side * 3.0);
}
std::string& Triangle::get_name_figure() {
	return name_figure;
}
Triangle::~Triangle() {
	std::cout << "~Triangle\n";
}