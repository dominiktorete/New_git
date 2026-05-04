#include "classColoredRectangle.h"
#include <iostream>
ColorRectangle::ColorRectangle(double _width, double _height, int _color) : Shape("ColorRectangle"), Rectangle(_width, _height) {
	ColorRectangle::color = static_cast<Color>(_color);
}
Color ColorRectangle::get_color() {
	return color;
}

double ColorRectangle::area() {
	return Rectangle::area();
}

double ColorRectangle::perimeter() {
	return Rectangle::perimeter();
}
std::string& ColorRectangle::get_name_figure() {
	return name_figure;
}
ColorRectangle::~ColorRectangle() {
	std::cout << "~ColorRectangle" << std::endl;

}