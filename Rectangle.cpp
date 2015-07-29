/*
 * Rectangle.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */

#include <string>
#include <sstream>
#include <iostream>
#include "Rectangle.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

// constructor
Rectangle::Rectangle(const string &color, double width, double length)
:Shape(color)
{
	p_length = length;
	p_width = width;
}

// destructor
Rectangle::~Rectangle() {}

// fx for getting length
double Rectangle::getLength() {
	return p_length;
}

// fx for getting width
double Rectangle::getWidth() {
	return p_width;
}

// NOTE FOR SELF: forgot to implement area fx from .h : virtual double area() const; // fx for area

double Rectangle::area() const {
	double tempArea = p_length * p_width;
	return tempArea;
}

// fx for returning description
string Rectangle::toString() const {
	ostringstream os;
	os << getColor() << " rectangle w/ length = " << p_length << " and width = " << p_width << " and area = " << area() << endl;
	return os.str();
}