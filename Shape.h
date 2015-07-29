/*
 * Shape.h
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <iostream>

using std::string;

using namespace std;

class Shape {
public:
	Shape(const string &color); // constructor
	~Shape(); // destructor
	string getColor() const; // returns color
	virtual double area() const = 0; // fx that returns obj area
	virtual string toString() const = 0; // fx that returns description
private:
	string p_color; // private var for color
};



#endif /* SHAPE_H_ */
