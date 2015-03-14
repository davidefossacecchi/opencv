/*Author: Davide Fossacecchi
 *Exercise 3*/

#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char** argv){
	namedWindow("Output", WINDOW_AUTOSIZE);
	Mat img(100, 100, CV_8UC3, Scalar(0,0,0));
	img(Rect(20,5,21,16)) = Scalar(0,255,0);
	imshow("Output", img);
	waitKey(0);
}
