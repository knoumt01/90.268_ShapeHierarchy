/*
 * Circle.h
 *
 *  Created on: Jun 25, 2015
 *      Author: Megan
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <string>
#include <iostream>
#include "Shape.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Circle : public Shape {
public:
	Circle (const string &color, double);
	~Circle();
	double getRadius();
	virtual double area() const;
	virtual string toString() const;
private:
	double p_radius;
};

#endif /* CIRCLE_H_ */
