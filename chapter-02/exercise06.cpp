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
	
	
	waitKey(0);
}
