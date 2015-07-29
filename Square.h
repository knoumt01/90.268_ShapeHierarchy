/*
 * Square.h
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape {
public:
	Square(const string &color, double length); // constructor
	~Square(); // destructor
	double getLength(); // returns length
	virtual double area() const; // calculates area
	virtual string toString() const; // returns shape info
private:
	double p_length; // length of side
};

#endif /* SQUARE_H_ */
