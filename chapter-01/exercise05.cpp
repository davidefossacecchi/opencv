/*Author: Davide Fossacecchi
 *Exercise 5*/

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
int SLIDER_POSITION = 0;

void onTrackbarSlide(int pos, void *){
	SLIDER_POSITION = pos;
}

int main(int argc, char** argv){
	namedWindow("Video", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open(0);
	createTrackbar("Position", "Video",&SLIDER_POSITION, 8, onTrackbarSlide);
	Mat resized, frame;	
	while(true){
		cap >> frame;
		for (int i = 0; i < SLIDER_POSITION; i++){
			pyrDown(frame, resized);
			frame = resized;
		}
		imshow("Video",frame);
		if(waitKey(33) >= 0) break;
	}
}
