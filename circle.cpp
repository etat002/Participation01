//#include "pch.h"
//#include "gtest/gtest.h"
#include <math.h>
#include <cstdlib>
#include <iostream>
# define M_PI          3.141592653589793238462643383279502884L /* pi */
class Circle {
	private:
		double radius;
	public:
		void set_radius(double);
		double area();
		double perimeter();
		double get_radius();
};

void Circle::set_radius(double r) {
	if(r<0){
		std::cerr << "Error: Negative Input\n";
		exit(-1);
	}
	else{
		radius = r;
	}
}
double Circle::area() {
	return M_PI * radius * radius;
}
double Circle::perimeter() {
	return 2 * M_PI * radius;
}
double Circle::get_radius() {
	return radius;
}


