#include "classColoredTriangle.h"
#include <iostream>
#include <string>
ColorTriangle::ColorTriangle(double _side, double _higher, int _color, std::string name) : Shape(name), Triangle(_side, _higher) {
	color = static_cast<Color>(_color);
}
Color ColorTriangle::get_color() {
	return color;
}

double ColorTriangle::area() {
	return Triangle::area();
}

double ColorTriangle::perimeter() {
	return Triangle::perimeter();
}
std::string& ColorTriangle::get_name_figure() {
	return name_figure;
}
ColorTriangle::~ColorTriangle() {
	std::cout << "~ColorTriangle" << std::endl;

}