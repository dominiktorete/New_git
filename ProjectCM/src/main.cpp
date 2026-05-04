#include <iostream>
#include <vector>
#include <memory>
#include "classTriangle.h"
#include "classRectangle.h"
#include "classColoredRectangle.h"
	void print_shape(Shape* sh) {
		std::cout << "Area of " << sh->get_name_figure() << " : " << sh->area() << std::endl;
		std::cout << "Perimeter of " << sh->get_name_figure() << " : " << sh->perimeter() << std::endl;
	}
	void print_shape(std::vector<std::unique_ptr<Shape>>& vec_sh) {
		for (size_t i = 0; i < vec_sh.size(); i++) {
			print_shape(vec_sh[i].get());
		}
	}
	int main()
	{
		Shape* sh = new ColorRectangle(5.4, 3.2, 1);
		print_shape(sh);
		std::vector<std::unique_ptr<Shape>> vec_shapes;
		vec_shapes.push_back(std::make_unique<Triangle>(3.5, 3.2));
		vec_shapes.push_back(std::make_unique<Rectangle>(5.5, 6.5));
		delete sh;
		print_shape(vec_shapes);
		return 0;
	}
