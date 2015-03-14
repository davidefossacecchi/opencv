/*Author: Davide Fossacecchi
 *Exercise 2*/

#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char** argv){
	namedWindow("Output", WINDOW_AUTOSIZE);
	Mat img(100, 100, CV_8UC3, Scalar(0,0,0));
	circle(img, Point2i(50, 50), 25, Scalar(255,0,0));
	imshow("Output", img);
	waitKey(0);
}
