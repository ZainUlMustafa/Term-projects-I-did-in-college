#pragma once

#include<string>
#include<opencv\highgui.h>
#include<opencv\cv.h>
using namespace cv;
using namespace std;

class targets{
public:
	targets(void);
	~targets(void);

	//making a constructor for targets
	targets(string targetName);

	//setting the aquired info from main.cpp into private variables
	void setXPos(int x);
	void setYPos(int y);

	void setHSVmin(Scalar min);
	void setHSVmax(Scalar max);

	//returning the info back to main.cpp
	int getXPos();
	int getYPos();

	Scalar getHSVmin();
	Scalar getHSVmax();

	//making getter and setter for the private member var 'type'
	//the string entered in brackets while making the class object in main.cpp is the string 't'
	void setType(string t){
		type = t;
	}
	string getType(){
		return type;
	}

	//making getter and setters for private member var 'colour'
	//color of the text for object detected
	void setColour(Scalar c){
		colour = c;
	}
	Scalar getColour(){
		return colour;
	}

private:
	int xPos, yPos;
	string type;
	Scalar HSVmin, HSVmax;
	//colour text beneath the object detected
	Scalar colour;
};
