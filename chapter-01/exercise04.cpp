/*Author: Davide Fossacecchi
 *Exercise 4*/

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main(int argc, char** argv){
	namedWindow("Video", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open(0);
	Mat frame, resized;
	cap >> frame;
	pyrDown(frame, resized);
	VideoWriter writer;
	writer.open("output/exercise4.avi",CV_FOURCC('M','J','P','G'), 30, resized.size());
	while(true){
		cap >> frame;
		pyrDown(frame, resized);
		imshow("Video",resized);
		writer << resized;
		if(waitKey(33) >= 0) break;
	}
}
