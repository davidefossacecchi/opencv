/*Author: Davide Fossacecchi
 *Exercise 5*/

#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char** argv){
	namedWindow("Output", WINDOW_AUTOSIZE);
	Mat img = imread("lena.bmp");
	img(Rect(5,10,20,30))=~img(Rect(5,10,20,30));
	img(Rect(50,60,20,30))=~img(Rect(50,60,20,30));
	imshow("Output", img);
	waitKey(0);
}
