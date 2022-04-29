//Author: Wesley Anastasi
//Assignment Title: Pract 14
//Assignment Description: cone class
//Due Date: 4/29/2022
//Date Created: 4/29/2022
//Date Last Modified: 4/29/2022

#ifndef CONE_H_
#define CONE_H_

#include <cmath>
#include <string>
using namespace std;

const double PI = 3.14159;

class cone{
	private:
		double height;
		double radius;
		string color;

	public:
		/*
		 * description: default constructor
		 * return: none
		 * precondition: none
		 * postcondition: cone object is created with default values
		 *
		*/

		cone();

		/*
		 * description: custom constructor
		 * return: none
		 * precondition: none
		 * postcondition: cone object is created with
		 *                height h, radius r, and default color.
		 *
		*/

		cone(double h, double r);

		/*
		 * description: cunstom constructor
		 * return: none
		 * precondition: none
		 * postcondition: cone object is created with
		 *                height h, radius r, and color c
		 *
		*/

		cone(double h, double r, string c);

		/*
		 * description: set the value of radius
		 * return: void
		 * precondition: a cone object exists
		 * postcondition: object radius is set to r
		 *
		*/

		void setRadius(double r);

		/*
		 * description: set the value of height
		 * return: void
		 * precondition: a cone object exists
		 * postcondition: object height is set to h
		 *
		*/

		void setHeight(double h);

		/*
		 * description: set the value of color
		 * return: void
		 * precondition: a cone object exists
		 * postcondition: object color is set to c
		 *
		*/

		void setColor(string c);

		/*
		 * description: return the value of radius
		 * return: double
		 * precondition: a cone object exists
		 * postcondition: object is unchanged
		 *
		*/


		double getRadius() const;

		/*
		 * description: return the value of height
		 * return: double
		 * precondition: a cone object exists
		 * postcondition: object is unchanged
		 *
		*/

		double getHeight() const;

		/*
		 * description: return the value of color
		 * return: string
		 * precondition: a cone object exists
		 * postcondition: object is unchanged
		 *
		*/

		string getColor() const;

		/*
		 * description: return the surface area of the cone
		 * return: double
		 * precondition: a cone object exists
		 * postcondition: object is unchanged
		 *
		*/


		double surfaceArea() const;

		/*
		 * description: return the volume of the cone
		 * return: double
		 * precondition: a cone object exists
		 * postcondition: object is unchanged
		 *
		*/

		double volume() const;
};


#endif /* CONE_H_ */