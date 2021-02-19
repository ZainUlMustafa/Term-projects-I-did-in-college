#include<opencv2\opencv.hpp>
#include<opencv2\highgui\highgui.hpp>
using namespace cv;
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

String Int2String(int iUniqueName){
	stringstream ss;
	ss << iUniqueName;
	return ss.str();
}

void refine(Mat &frame){
	Mat erodeElement = getStructuringElement(MORPH_RECT, Size(3, 3));
	Mat dilateElement = getStructuringElement(MORPH_RECT, Size(3, 3));

	erode(frame, frame, erodeElement);
	erode(frame, frame, erodeElement);
	erode(frame, frame, erodeElement);
	erode(frame, frame, erodeElement);

	dilate(frame, frame, dilateElement);
	dilate(frame, frame, dilateElement);
	dilate(frame, frame, dilateElement);
	dilate(frame, frame, dilateElement);
}

int main(){
	String ImgFormat;
	cout<<"Format of image: ";
	cin>>ImgFormat;

	char ImgRefine;
	cout<<"Do you want to refine pictures as well? (y/n)";
	cin>>ImgRefine;

	VideoCapture capture;
	capture.open("bouncingBall.avi");

	if(!capture.isOpened()){
		cout<<"Video not aquired";
		return -1;
	}

	Mat frame;
	int iUniqueName = 0;
	double percentage = 0.0;

	while(capture.get(CV_CAP_PROP_POS_FRAMES) < capture.get(CV_CAP_PROP_FRAME_COUNT)-1){
		// take frame by frame with each iteration and save that frame
		// into the mat object
		capture.read(frame);

		// create a unique name for each iteration
		String sUniqueName = Int2String(iUniqueName);

		// save the mat object as the picture in the directory we want with that unique name
		String fileName =  "C:/Users/DELL/Desktop/Video2Frames/normal/" + sUniqueName + ImgFormat;
		imwrite(fileName, frame);

		// refining the pictures before saving them
		if(ImgRefine == 'y'){
			refine(frame);

			// save the refined mat object as the picture in the directory we want with that unique name
			String fileName =  "C:/Users/DELL/Desktop/Video2Frames/refined/" + sUniqueName + ImgFormat;
			imwrite(fileName, frame);
		}

		// increment the iUniqueName
		iUniqueName++;
		
		// display the output
		percentage = ( iUniqueName / (capture.get(CV_CAP_PROP_FRAME_COUNT)-1) ) * 100;
		for(int i = 0; i<(int)percentage; i+=3){
			cout<<".";
		}
		cout<<percentage<<"%"<<endl;
		//system("cls");
	}
	capture.release();

	return 0;
}