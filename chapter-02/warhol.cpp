/*Author: Davide Fossacecchi
 *Makes some kind of Warhol effect*/

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main(int argc, char** argv){
	VideoCapture cap;
	Mat img, resized, result, rchannels[3], channel[3];
	int row, col;
	cap.open(0);
	cap >> img;
	cap.release();
	pyrDown(img, resized);
	split(resized, rchannels);
	
	for (int i=0; i<=2; i++) {
		channel[i] = Mat::zeros(img.rows, img.cols, CV_8UC1);
		channel[i](Rect(0,0,resized.cols,resized.rows)) += rchannels[i];
		col = (i+1)%2;
		row = (i-col+1)/2;
		channel[i](Rect(row*resized.cols,col*resized.rows,resized.cols,resized.rows)) += rchannels[i];
	}
	merge(channel,3,result);
	imshow("tadaaaa", result);
	waitKey(0);
}
