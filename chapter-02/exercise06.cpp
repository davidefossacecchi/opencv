/*Author: Davide Fossacecchi
 *Exercise 6*/

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv){
	Mat img = imread("lena.bmp");
	imshow("Original", img);
	Mat channels[3], result;
	split(img, channels);
	imshow("Blue", channels[0]);
	
	//point a
	imshow("Green", channels[1]);
	imshow("Red", channels[2]);
	
	//point b
	Mat clone1 = channels[1].clone();
	Mat clone2 = channels[1].clone();
	
	//point c
	double minVal, maxVal;
	minMaxLoc(channels[1], &minVal, &maxVal);
	cout << "minimum: "<< minVal <<" maximum: "<< maxVal << endl;
	
	//point d
	double thresh = (maxVal - minVal) / 2;
	clone1.setTo(thresh);
	
	//point e
	clone2.setTo(0);
	compare(channels[1], clone1, clone2, CMP_GE);
	imshow("result", clone2);
	
	//point f
	channels[1] -= thresh/2;
	imshow("last result", channels[1]);
	
	waitKey(0);
}
