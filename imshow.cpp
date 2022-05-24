#include <opencv2/opencv.hpp>

int main() {
	cv::Mat img;
	img = cv::imread("figure_gakeppuchi.jpg");

	cv::imshow("title", img);
	cv::waitKey(0);

	return 0;
}
