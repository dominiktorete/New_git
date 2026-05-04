#include "classRectangle.h"
#include <iostream>
Rectangle::Rectangle(double _width, double _height) : Shape("Rectangle"), width(_width), height(_height) {}

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