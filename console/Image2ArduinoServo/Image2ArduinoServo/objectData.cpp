#include "objectData.h"


objectData::objectData(void){
}


objectData::~objectData(void){
}

void objectData::setXpos(int x){
	p_Xpos = x;
}

void objectData::setYpos(int y){
	p_Ypos = y;
}

int objectData::getXpos(){
	return p_Xpos;
}

int objectData::getYpos(){
	return p_Ypos;
}