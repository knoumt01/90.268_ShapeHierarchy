/*
 * Rectangle.h
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <string>
#include <iostream>
#include "Shape.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Rectangle : public Shape {
public:
	Rectangle(const string &color, double width, double length); // constructor
	~Rectangle(); // destructor
	double getLength(); // gets length
	double getWidth(); // gets width
	virtual double area() const; // fx for area
	virtual string toString() const; // returns shape description
private:
	double p_length;
	double p_width;
};




#endif /* RECTANGLE_H_ */
