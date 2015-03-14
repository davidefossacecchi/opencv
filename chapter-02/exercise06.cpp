/*Author: Davide Fossacecchi
 *Exercise 6*/

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace cv;

int main(int argc, char** argv){
	Mat img = imread("rgb.png");
	Mat channels[3];
	split(img, channels);
	imshow("Blue", channels[0]);
	imshow("Green", channels[1]);
	imshow("Red", channels[2]);
	waitKey(0);
}
