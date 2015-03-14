/*Author: Davide Fossacecchi
 *Exercise 4*/

#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char** argv){
	namedWindow("Output", WINDOW_NORMAL);
	Mat img(210, 210, CV_8UC1, Scalar(0));
	for(int i = 10; i<=100; i+=10)	img(Rect(i,i,210-2*i,210-2*i)) = Scalar(2*i);
	imshow("Output", img);
	waitKey(0);
}
