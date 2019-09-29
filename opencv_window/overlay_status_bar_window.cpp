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
	Mat lena= imread("../images/lena.jpg");
	
	// Create windows
	namedWindow("Lena");
	
	// show images
	imshow("Lena", lena);
	
	// Display Overlay
	displayOverlay("Lena", "Overlay 20secs", 20000);

	// Display Status Bar
	displayStatusBar("Lena", "Status bar 20secs", 20000);

	// Save window parameters
	saveWindowParameters("Lena");

	// Load Window parameters
	loadWindowParameters("Lena");

	// Wait for any key press
	waitKey(0);

	// Destroy the windows
	destroyWindow("Lena");
	
	return 0;
}