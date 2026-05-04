#pragma once
#include "classShape.h"
enum class Color {
	Red,
	Green,
	Blue
};
class ColorShape : virtual public Shape {
protected:
	Color color{};
public:
	virtual Color get_color() = 0;
	virtual ~ColorShape();
};
