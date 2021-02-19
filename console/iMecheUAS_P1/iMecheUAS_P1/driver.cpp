#include<opencv2\highgui\highgui.hpp>
#include<opencv\cv.h>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include"target.h"
using namespace std;
using namespace cv;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//globally declared variables which are to be used by most functions
int H_MIN = 0;
int H_MAX = 256;
int S_MIN = 0;
int S_MAX = 256;
int V_MIN = 0;
int V_MAX = 256;
//default video capture dimensions 640x480
const int frameWidth = 200;
const int frameHeight = 100;
//max number of objects detected in frame
const int maxNumObjects = 50;
//min and max object area
const int minObjectArea = 10*10;
const int maxObjectArea = frameWidth*frameHeight/1.5;
//window names for different windows
const string WinName1 = "ORIGINAL IMAGE";
const string WinName2 = "HSV IMAGE";
const string WinName3 = "THRESHOLDED IMAGE";
const string WinName4 = "ERODED AND DILATED IMAGE";
const string WinNameTrackbar = "TRACKBARS";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void trackbarCallback(int, void*){
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//function to convert int to string using stringstream
//it mainly functions with a string buffer
string int2string(int number){
	stringstream ss;
	ss << number;
	//returning the contents of stringstream buffer in string type
	return ss.str();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//function to give user control over noise adjustment
void createTrackbars(){
	//create window for trackbars
	namedWindow(WinNameTrackbar,0);
	//create memory to store trackbar name on window
	char TrackbarName[50];
	sprintf( TrackbarName, "H_MIN", H_MIN);
	sprintf( TrackbarName, "H_MAX", H_MAX);
	sprintf( TrackbarName, "S_MIN", S_MIN);
	sprintf( TrackbarName, "S_MAX", S_MAX);
	sprintf( TrackbarName, "V_MIN", V_MIN);
	sprintf( TrackbarName, "V_MAX", V_MAX);
	//whenever the trackbar is moved, trackbarCallback function is called
	createTrackbar("H_MIN", WinNameTrackbar, &H_MIN, H_MAX, trackbarCallback);
	createTrackbar("H_MAX", WinNameTrackbar, &H_MAX, H_MAX, trackbarCallback);
	createTrackbar("S_MIN", WinNameTrackbar, &S_MIN, S_MAX, trackbarCallback);
	createTrackbar("S_MAX", WinNameTrackbar, &S_MAX, S_MAX, trackbarCallback);
	createTrackbar("V_MIN", WinNameTrackbar, &V_MIN, V_MAX, trackbarCallback);
	createTrackbar("V_MAX", WinNameTrackbar, &V_MAX, V_MAX, trackbarCallback);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//function to draw crosshairs over detected object in the original image
void drawObject(vector<targets> theTargets, Mat &cameraFeed){
	//the '&' sign means that we are working on the values in the matrix, not on the matrix
	//so we pass the original matrix by reference

	//first a loop is required that will run until it reaches the end of the vector of fruits
	for(int i = 0; i<theTargets.size(); i++){
		//track the apples present in the vector
		//draw a circle over those objects
		circle(cameraFeed, Point(theTargets.at(i).getXPos(), theTargets.at(i).getYPos()), 50, Scalar(0,255,0));
		cout<<theTargets.at(i).getXPos();
		///circle(cameraFeed, Point(0,0), 10, Scalar(0,0,255));
		//write text below the drawn circle containing some valuable information
		//for example: coordinates of those objects, name of those objects et cetra
		putText(cameraFeed, int2string(theTargets.at(i).getXPos()) + " , " + int2string(theTargets.at(i).getYPos()),
			Point(theTargets.at(i).getXPos(), theTargets.at(i).getYPos()+20), 1, 1, Scalar(0, 255, 0));

		//object name will be displayed 30 pixels above the detection point
		//this is set in the Point argument
		putText(cameraFeed, theTargets.at(i).getType(), Point(theTargets.at(i).getXPos(), theTargets.at(i).getYPos()-30),
			1, 2, theTargets.at(i).getColour());
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//using morphology operators to remove noise
void morph(Mat &thresh){
	Mat erodeElement = getStructuringElement(MORPH_RECT, Size(3,3));
	Mat dilateElement = getStructuringElement(MORPH_RECT, Size(3,3));

	//must follow the order of erosion and dilation
	erode(thresh, thresh, erodeElement);
	erode(thresh, thresh, erodeElement);
	erode(thresh, thresh, erodeElement);

	dilate(thresh, thresh, dilateElement);
	dilate(thresh, thresh, dilateElement);
	dilate(thresh, thresh, dilateElement);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//function to process and extract information such as area from contours found
//this function is only used when calibration mode is activated
void trackFilteredObject(Mat &threshold, Mat &HSV, Mat &cameraFeed){
	//make a vector to store similar objects
	vector<targets> calObjects;

	Mat temp;
	threshold.copyTo(temp);

	vector< vector<Point> > contours;
	vector<Vec4i> hierarchy;
	findContours(temp, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);
	//findContours(temp, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);

	//bool to check if an object is detected or is it just a noise
	bool objectDetected = false;
	//check if there is something present in the hierarchy
	if(hierarchy.size() > 0){
		//then check if hierarchy size is smaller than maxNumObjects
		if(hierarchy.size() < maxNumObjects){
			//looping until every contour is processed
			for(int index = 0; index >= 0; index = hierarchy[index][0]){
				Moments moment = moments((Mat)contours[index]);
				double area = moment.m00;
				//check if the area is larger than the minObjectArea
				//as area smaller than 20px x 20px is probably just noise
				if(area < minObjectArea){
					objectDetected = false;
				}
				else if(area > minObjectArea){
					//make points for centroid of current contour
					targets calObject;
					calObject.setXPos(moment.m10/area);
					calObject.setYPos(moment.m01/area);

					//push_back this current apple in the vector
					//all the properties of this current apple (xPos, yPos) are stored as well in the vector
					calObjects.push_back(calObject);

					objectDetected = true;
				}
			}
			//loop ends here as all contours have been processed

			//now if object is detected or if objectDetected is true
			//then call drawObject() function
			if(objectDetected == true){
				drawObject(calObjects, cameraFeed);
			}
		}
		//else hierarchy.size() is large and contains a lot of noise
		else{
			putText(cameraFeed, "Too Much Noise!\nSuggestion: Adjust Filters.", Point(0,50), 1, 0.5, Scalar(0, 0, 255), 2);
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//same fuction as above, with more arguments
//this is an example of function overloading
//this function is only used when calibration mode is deactivated
void trackFilteredObject(targets theTargets, Mat &threshold, Mat HSV, Mat &cameraFeed){
	//make a vector to store similar objects
	vector<targets> objects;
	/*vector<fruits> bananas;
	vector<fruits> cherries;*/

	Mat temp;
	threshold.copyTo(temp);

	vector< vector<Point> > contours;
	vector<Vec4i> hierarchy;
	findContours(temp, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);
	//findContours(temp, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);

	//bool to check if an object is detected or is it just a noise
	bool objectDetected = false;
	//check if there is something present in the hierarchy
	if(hierarchy.size() > 0){
		//then check if hierarchy size is smaller than maxNumObjects
		if(hierarchy.size() < maxNumObjects){
			//looping until every contour is processed
			for(int index = 0; index >= 0; index = hierarchy[index][0]){
				Moments moment = moments((Mat)contours[index]);
				double area = moment.m00;
				//check if the area is larger than the minObjectArea
				//as area smaller than 20px x 20px is probably just noise
				if(area < minObjectArea){
					objectDetected = false;
				}
				else if(area > minObjectArea){
					//make points for centroid of current contour

					targets object;
					object.setXPos(moment.m10/area);
					object.setYPos(moment.m01/area);

					//set the type and colour of object by getting the type and color of that target from the class properties
					object.setType(theTargets.getType());
					object.setColour(theTargets.getColour());

					//push_back this current object in the vector
					//all the properties of this current object e.g. (xPos, yPos) are stored in the vector as well
					objects.push_back(object);

					//////////////////////////////////////////////////////////////////////////////////////////////////

					//for bananas
					/*fruits banana;
					banana.setXPos(moment.m10/area);
					banana.setYPos(moment.m01/area);
					//set the type and colour of apple
					banana.setType(theFruits.getType());
					banana.setColour(theFruits.getColour());

					//push_back this current apple in the vector
					//all the properties of this current apple including (xPos, yPos) are stored as well in the vector
					bananas.push_back(banana);

					//////////////////////////////////////////////////////////////////////////////////////////////////

					//for cherries
					fruits cherry;
					cherry.setXPos(moment.m10/area);
					cherry.setYPos(moment.m01/area);
					//set the type and colour of apple
					cherry.setType(theFruits.getType());
					cherry.setColour(theFruits.getColour());

					//push_back this current apple in the vector
					//all the properties of this current apple including (xPos, yPos) are stored as well in the vector
					cherries.push_back(cherry);*/

					objectDetected = true;
				}
			}
			//loop ends here as all contours have been processed

			//now if object is detected or if objectDetected is true
			//then call drawObject() function
			if(objectDetected == true){
				drawObject(objects, cameraFeed);
			}
		}
		//else hierarchy.size() is large and contains a lot of noise
		else{
			putText(cameraFeed, "Too Much Noise!\nSuggestion: Adjust Filters.", Point(0,50), 1, 0.5, Scalar(0, 0, 255), 2);
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
	//Mat objects to store frames from cameraFeed
	Mat cameraFeed;
	Mat threshold;
	Mat HSV;

	//To Pause
	bool pause = false;

	//VideoCapture to get webcam feed
	VideoCapture capture;

	//calibration mode bool to activate or deactivate calibrating functions
	bool calibrationMode = true;

	if(calibrationMode){
		//create slider bars for HSV filtering
		createTrackbars();
	}
	//infinite loop to copy webcam feed to cameraFeed matrix
	//all operations are performed within this loop
	while(1){
	capture.open(2);
	//setting the dimensions of video frame
	//capture.set(CV_CAP_PROP_FRAME_WIDTH, frameWidth);
	//capture.set(CV_CAP_PROP_FRAME_HEIGHT, frameHeight);

	if(!capture.isOpened()){
		cout<<"ERROR ACQUIRING VIDEO FEED\n";
		getchar();
		return -1;
	}

	while(1){
		capture.read(cameraFeed);
		cvtColor(cameraFeed, HSV, COLOR_BGR2HSV);

		//check if calibration mode is activated
		if(calibrationMode == true){
			inRange(HSV, Scalar(H_MIN, S_MIN, V_MIN), Scalar(H_MAX, S_MAX, V_MAX), threshold);
			morph(threshold);
			imshow(WinName3, threshold);
			trackFilteredObject(threshold, HSV, cameraFeed);
		}
		else{
			//string in the brackets of object in the line below is the string 'type'
			targets otar("OTAR"), wtar("WTAR");

			//for otar
			//performing actions to track the objects
			inRange(HSV, otar.getHSVmin(), otar.getHSVmax(), threshold);
			morph(threshold);
			trackFilteredObject(otar, threshold, HSV, cameraFeed);

			//for wtar
			//performing actions to track the objects
			inRange(HSV, wtar.getHSVmin(), wtar.getHSVmax(), threshold);
			morph(threshold);
			trackFilteredObject(wtar, threshold, HSV, cameraFeed);
		}

		imshow(WinName3, threshold);
		imshow(WinName2, HSV);
		imshow(WinName1, cameraFeed);
		waitKey(30);

		switch(waitKey(10)){

			case 27: //'esc' key has been pressed, exit program.
				return 0;
			case 112: //'p' has been pressed. this will pause/resume the code.
				pause = !pause;
				if(pause == true){ cout<<"Code paused, press 'p' again to resume"<<endl;
					while (pause == true){
						//stay in this loop until 
						switch (waitKey()){
							//a switch statement inside a switch statement? Mind blown.
						case 112: 
							//change pause back to false
							pause = false;
							cout<<"Code resumed."<<endl;
							break;
						}
					}
				}
			}
	}///
	//release the capture before re-opening and looping again.
	capture.release();
	}

	//while(1){
	//	capture.read(cameraFeed);
	//	cvtColor(cameraFeed, HSV, COLOR_BGR2HSV);

	//	//check if calibration mode is activated
	//	if(calibrationMode == true){
	//		inRange(HSV, Scalar(H_MIN, S_MIN, V_MIN), Scalar(H_MAX, S_MAX, V_MAX), threshold);
	//		morph(threshold);
	//		imshow(WinName3, threshold);
	//		trackFilteredObject(threshold, HSV, cameraFeed);
	//	}
	//	else{
	//		//string in the brackets of object in the line below is the string 'type'
	//		targets otar("Orange Shell"), wtar("ASCII Char");

	//		//performing actions to track the objects
	//		inRange(HSV, otar.getHSVmin(), otar.getHSVmax(), threshold);
	//		morph(threshold);
	//		trackFilteredObject(otar, threshold, HSV, cameraFeed);
	//	}

	//	imshow(WinName3, threshold);
	//	imshow(WinName2, HSV);
	//	imshow(WinName1, cameraFeed);
	//	waitKey(30);
	//}

	return 0;
}