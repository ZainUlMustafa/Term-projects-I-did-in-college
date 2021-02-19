#include<opencv2\opencv.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>
using namespace std;
using namespace cv;

// Global Variables
Mat original_image;
Mat gray_image;
Mat canny_edge;
Mat destination_image;

int kernel_value = 3;
const int max_thresh = 400;
int min_thresh;
int ratio = 3;

void trackbarCallback(int, void*){
	blur(gray_image, canny_edge, Size(3, 3));
	Canny(canny_edge, canny_edge, min_thresh, min_thresh*ratio, kernel_value);
	destination_image = Scalar::all(0);
	original_image.copyTo(destination_image, canny_edge);
	imshow("Edges Detected", destination_image);
}

int main(){
	original_image = imread("balls.jpg");
	cvtColor(original_image, gray_image, COLOR_BGR2GRAY);

	namedWindow("Edges Detected");
	namedWindow("Threshold");

	createTrackbar("Trackbar", "Threshold", &min_thresh, max_thresh, trackbarCallback);
	trackbarCallback(0, 0);

	waitKey(0);
	return 0;
}