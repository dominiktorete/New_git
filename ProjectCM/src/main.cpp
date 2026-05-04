#include <iostream>
#include <vector>
#include <memory>
#include "classTriangle.h"
#include "classRectangle.h"
#include "classColoredRectangle.h"
#include "classColoredTriangle.h"

void print_shape(Shape* sh) {
	std::cout << "Area of " << sh->get_name_figure() << " : " << sh->area() << std::endl;
	std::cout << "Perimeter of " << sh->get_name_figure() << " : " << sh->perimeter() << std::endl;
}
void print_shape(std::vector<std::unique_ptr<Shape>>& vec_sh) {
	for (size_t i = 0; i < vec_sh.size(); i++) {
		print_shape(vec_sh[i].get());
	}
}
void print_shape_color(ColorShape* shc) {
	std::cout << "Area of " << shc->get_name_figure() << " : " << shc->area() << std::endl;
	std::cout << "Perimeter of " << shc->get_name_figure() << " : " << shc->perimeter() << std::endl;
	std::cout << "Color of " << shc->get_name_figure() << " : " << static_cast<int>(shc->get_color()) << std::endl;

}
int main()
{
	Shape* sh = new ColorRectangle(5.4, 3.2, 1, "ColorRectangle");
	ColorShape* sh2 = new ColorTriangle(3.2, 3.4, 2, "ColorTriangle");
	print_shape_color(sh2);
	print_shape(sh);
	std::vector<std::unique_ptr<Shape>> vec_shapes;
	vec_shapes.push_back(std::make_unique<Triangle>(3.5, 3.2, "Triangle"));
	vec_shapes.push_back(std::make_unique<Rectangle>(5.5, 6.5, "Rectangle"));
	delete sh2;
	delete sh;
	print_shape(vec_shapes);
	return 0;
}
