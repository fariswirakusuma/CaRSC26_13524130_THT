

#include <opencv2/opencv.hpp>
#include "bits/stdc++.h"
using namespace std;
int main() {
    
    string path = "test.jpeg";
    cv::Mat img= cv::imread(path);
    if (img.empty())return -1;
    cv::Mat logp;
    cv::Point2f center(img.cols/2.0f, img.rows/2.0f);
    cv::logPolar(img, logp, center, 40,cv::INTER_LINEAR +cv::WARP_FILL_OUTLIERS);
    cv::Mat gray;
    cv::cvtColor(logp, gray, cv::COLOR_BGR2GRAY);
    cv::imshow("result", gray);
    cv::waitKey(1);
    cv::imwrite("result.jpeg",gray);
    cv::destroyWindow("result");
    return 0;
}