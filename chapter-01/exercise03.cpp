#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main(int argc, char** argv){
	namedWindow("Video", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open(0);
	Mat frame;
	while(true){
		cap >> frame;
		imshow("Video",frame);
		if(waitKey(33) >= 0) break;
	}
}
