#pragma once
#include "classColorShape.h"
#include "classTriangle.h"

class ColorTriangle : virtual public ColorShape, virtual public Triangle {
public:
	ColorTriangle(double _side, double _higher, int _color, std::string name);
	Color get_color() override;
	double area() override;
	double perimeter() override;
	std::string& get_name_figure() override;
	~ColorTriangle() override;
};
