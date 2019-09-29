#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// OpenCV includes
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

int main( int argc, const char** argv )
{
	// Read images
	Mat lena = imread("../images/lena.jpg");
	
	// Create windows
	namedWindow("Lena", WINDOW_NORMAL); // WINDOW_AUTOSIZE

	// Move window
	moveWindow("Lena", 50, 50);
	
	// Show images
	imshow("Lena", lena);

	// Resize window, only non autosize
	resizeWindow("Lena", 512, 512); 

	// Wait for any key press
	waitKey(0);

	// Destroy the windows
	destroyWindow("Lena");

	// Create 10 windows
	for(int i=0; i<10; i++)
	{
		ostringstream ss;
		ss << "Photo " << i;
		namedWindow(ss.str());
		moveWindow(ss.str(), 20*i, 20*i);
		imshow(ss.str(), lena);
	}

	waitKey(0);

	// Destroy all windows
	destroyAllWindows();
	
	return 0;
}