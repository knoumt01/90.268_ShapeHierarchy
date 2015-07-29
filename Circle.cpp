/*
 * Circle.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */

#include <string>
#include <sstream>
#include <ostream>
#include "Circle.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

// constructor for Circle
Circle::Circle(const string& color, double radius)
:Shape(color)
{
	p_radius = radius;
}

// destructor
Circle::~Circle() {}

// getter fx for radius
double Circle::getRadius() {
	return p_radius;
}

// fx for approximate area (pi is approximated to 3.14)
double Circle::area() const {
	double p_area = 2 * p_radius * 3.14;
	return p_area;
}

// fx for circle description
string Circle::toString() const {
	ostringstream os;
	os << getColor() << " circle w/ radius of " << p_radius << " and area: " << area() << endl;
	return os.str();
}
