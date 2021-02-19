#include<iostream>
#include<opencv\cv.h>
#include<opencv2\opencv.hpp>
#include<opencv\highgui.h>
#include<opencv2\highgui\highgui.hpp>
#include"SerialPort.h"
#include"objectData.h"

using namespace cv;
using namespace std;

//globally declared variables which are to be used by most functions
int H_MIN = 0;
int H_MAX = 256;
int S_MIN = 0;
int S_MAX = 256;
int V_MIN = 0;
int V_MAX = 256;
// default video capture dimensions 1080p
const int frameWidth = 1920;
const int frameHeight = 1080;
// max number of objects detected in frame
const int maxNumObjects = 50;
// min and max object area
const int minObjectArea = 30*30;
const int maxObjectArea = frameWidth*frameHeight/1.5;
// names for different image windows
const string WinName1 = "ORIGINAL IMAGE";
const string WinName2 = "HSV IMAGE";
const string WinName3 = "THRESHOLDED IMAGE";
const string WinName4 = "ERODED AND DILATED IMAGE";
const string WinNameTrackbar = "TRACKBARS";

// serial communication essentials
char output_from_serial_port[MAX_DATA_LENGTH];
char incomingData[MAX_DATA_LENGTH];
char *port = "\\\\.\\COM3";

void trackbarCallback(int, void*){
}

string int_2_string(int number){
	stringstream ss;
	ss << number;
	//returning the contents of stringstream buffer in string type
	return ss.str();
}

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

void morph(Mat &threshold){
	erosion_element = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilation_element = getStructuringElement(MORPH_RECT, Size(3, 3));

	erode(threshold, threshold, erosion_element);
	dilate(threshold, threshold, dilation_element);
}

void trackObject(Mat &cameraFeed, Mat HSV, Mat &threshold){
	vector<objectData> calibObject;

	Mat tempThresh;
	threshold.copyTo(tempThresh);

	vector < vector<Points> > contours;
	vector <Vec4i> hierarchy;
	findContours(tempThresh, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);

	if(hierarchy.size() > 0){
		if(hierarchy.size() < maxNumObjects){
			for(int i = 0; i >= 0; i = hierarchy[i][0]){
				Moment moment = Moment((Mat)contours[i]);
			}
		}
	}
}

// Overloaded function
void trackObject(objectData objects, Mat &cameraFeed, Mat HSV, Mat &threshold){
	vector<objectData> trackedObject;

	Mat tempThresh;
	threshold.copyTo(tempThresh);

	vector < vector<Points> > contours;
	vector <Vec4i> hierarchy;
	findContours(tempThresh, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);

	if(hierarchy.size() > 0){
		if(hierarchy.size() < maxNumObjects){
			for(int i = 0; i >= 0; i = hierarchy[i][0]){
				Moment moment = Moment((Mat)contours[i]);
			}
		}
	}
}

void drawCrosshair(Mat &cameraFeed){
}

void serial_operation(SerialPort arduino, string objectName){
	if(arduino.isConnected()){
		cout<<"Connected"<<endl;
	}
	else{
		cout<<"Wrong port!"<<endl;
	}
	while(arduino.isConnected()){
		char *objectName_CharArray = new char[objectName.size() + 1];
		copy(objectName.begin(), objectName.end(), objectName_CharArray);
		arduino.writeSerialPort(objectName_CharArray, MAX_DATA_LENGTH);
	}
}

int main(){
	Mat cameraFeed;
	Mat HSV;
	Mat threshold;

	VideoCapture capture;
	capture.open(0);

	if(!(capture.isOpened())){
		return -1;
	}

	int boolCalibrationMode;
	cout<<"Enter 1 or 0 if you want to either turn calibartion mode on or off: ";
	cin>>boolCalibrationMode;

	if(boolCalibrationMode == 1){
		createTrackbars();
	}
	
	return 0;
}