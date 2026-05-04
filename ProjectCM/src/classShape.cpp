#include "classShape.h"
#include <iostream>
Shape::Shape(std::string _name) : name_figure(_name){}
double Shape::area() {
	return 0.0;
}
double Shape::perimeter() {
	return 0.0;
}
Shape::~Shape(){
	std::cout << "~Shape\n";
}