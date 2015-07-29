/*
 * Shape.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */
#include <string>
#include <iostream>
#include "Shape.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

// constructor
Shape::Shape(const string &color)
:p_color(color)
{}

// destructor
Shape::~Shape() {}

// returns color
string Shape::getColor() const {
	return p_color;
}
