#include "fruit.h"


fruits::fruits(void){
}


fruits::~fruits(void){
}

fruits::fruits(string fruitName){

	setType(fruitName);
	if(fruitName == "apple"){
		//setting the minimum and maximum HSV values to find apples
		//values are obtained from calibration trackbars
		setHSVmin(Scalar(32, 77, 58));
		setHSVmax(Scalar(49, 214, 224));
		//setting the colour of text for the name of this object
		//colour BGR value is taken from website
		setColour(Scalar(0, 255, 0));
	}
	if(fruitName == "banana"){
		//setting the minimum and maximum HSV values to find apples
		//values are obtained from calibration trackbars
		setHSVmin(Scalar(19, 79, 114));
		setHSVmax(Scalar(32, 256, 214));
		//setting the colour of text for the name of this object
		//colour BGR value is taken from website
		setColour(Scalar(0, 0, 0));
	}
	if(fruitName == "cherry"){
		//setting the minimum and maximum HSV values to find apples
		//values are obtained from calibration trackbars
		setHSVmin(Scalar(49, 63, 70));
		setHSVmax(Scalar(256, 256, 175));
		//setting the colour of text for the name of this object
		//colour BGR value is taken from website
		setColour(Scalar(0, 0, 255));
	}
}

void fruits::setXPos(int x){
	xPos = x;
}

void fruits::setYPos(int y){
	yPos = y;
}

void fruits::setHSVmax(Scalar max){
	HSVmax = max;
}

void fruits::setHSVmin(Scalar min){
	HSVmin = min;
}

int fruits::getXPos(){
	return xPos;
}

int fruits::getYPos(){
	return yPos;
}

Scalar fruits::getHSVmax(){
	return HSVmax;
}

Scalar fruits::getHSVmin(){
	return HSVmin;
}