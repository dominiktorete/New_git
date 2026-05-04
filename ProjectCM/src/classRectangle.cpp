#include "classRectangle.h"
#include <iostream>
Rectangle::Rectangle(double _width, double _height, std::string name) : Shape(name), width(_width), height(_height) {}
Rectangle::Rectangle(double _width, double _height) : width(_width), height(_height) {};
double Rectangle::area() {
	return width * height;
}
double Rectangle::perimeter() {
	return ((width * 2) + (height * 2));
}
std::string& Rectangle::get_name_figure() {
	return name_figure;
}
Rectangle::~Rectangle() {
	std::cout << "~Rectangle\n";
}