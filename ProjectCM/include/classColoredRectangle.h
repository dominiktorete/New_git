#pragma once

#include "classRectangle.h"
#include "classColorShape.h"

class ColorRectangle : virtual public ColorShape, virtual public Rectangle{
public:
	ColorRectangle(double _width, double _height, int _color);
	Color get_color() override;
	double area() override;
	double perimeter() override;
	std::string& get_name_figure() override;
	~ColorRectangle() override;
};