#include "target.h"


targets::targets(void){
}


targets::~targets(void){
}

targets::targets(string targetName){

	setType(targetName);
	if(targetName == "otar"){
		//setting the minimum and maximum HSV values to find apples
		//values are obtained from calibration trackbars
		setHSVmin(Scalar(0, 103, 81));
		setHSVmax(Scalar(25, 205, 256));
		//setting the colour of text for the name of this object
		//colour BGR value is taken from website
		setColour(Scalar(0, 255, 0));
	}
	if(targetName == "wtar"){
		//setting the minimum and maximum HSV values to find apples
		//values are obtained from calibration trackbars
		setHSVmin(Scalar(0, 0, 0));
		setHSVmax(Scalar(256, 256, 256));
		//setting the colour of text for the name of this object
		//colour BGR value is taken from website
		setColour(Scalar(0, 0, 0));
	}
}

void targets::setXPos(int x){
	xPos = x;
}

void targets::setYPos(int y){
	yPos = y;
}

void targets::setHSVmax(Scalar max){
	HSVmax = max;
}

void targets::setHSVmin(Scalar min){
	HSVmin = min;
}

int targets::getXPos(){
	return xPos;
}

int targets::getYPos(){
	return yPos;
}

Scalar targets::getHSVmax(){
	return HSVmax;
}

Scalar targets::getHSVmin(){
	return HSVmin;
}