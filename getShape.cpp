/*
 * getShape.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: Matt Knouff
 */

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Shape.h"
#include <string>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Shape* getShape()  {
	string shape_ID;
	string color_ID;
	double radius;
	double sidelength;
	double length;
	double width;
	int testing=1;
	
	cout<<"\nEnter a list of shapes - 'done' to end";
	while(1) {
	
		cout<<"\nEnter the shape's color (or 'done')...";
		cin>>color_ID;
		string& color=color_ID;
		
		if(color_ID == "done") {
			testing++;
			return NULL;
		}
		else {
			cout<<"Enter shape type... ";
			cin>>shape_ID;
			
			if(shape_ID=="circle") {
				cout<<"Enter the radius... ";
				cin>>radius;
				Circle* circle_ID = new Circle(color,radius);
				testing++;
				return circle_ID;
			
			}
			else if(shape_ID =="square"){
				cout<<"Enter the length of a side... ";
				cin>>sidelength;
				Square* square_ID = new Square(color,sidelength);
				return square_ID;
			}
			else if(shape_ID == "rectangle") {
				cout<<"Enter the length and width... ";
				cin>>length>>width;
                		Rectangle* rectangle_ID = new Rectangle(color,width,length);
                		return rectangle_ID;
			}
		}		
	}
}


