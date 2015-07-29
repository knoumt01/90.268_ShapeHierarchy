/*
 * Square.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */

#include <string>
#include <sstream>
#include <ostream>
#include <iostream>
#include "Square.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

// constructor
Square::Square(const string &color, double length)
:Shape(color)
{
	p_length = length;
}

// destructor
Square::~Square() {}

// fx for area
double Square::area() const {
	double p_area = p_length * p_length;
	return p_area;
}

// fx to return Square string
string Square::toString() const {
	ostringstream os;
	os << getColor() << " square w/ sides measuring " << p_length << " and area of " << area() << endl;
	return os.str();
}


