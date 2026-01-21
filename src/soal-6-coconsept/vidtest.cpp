
#include <opencv2/opencv.hpp>
#include "bits/stdc++.h"
using namespace std;
int main(){
    cv::VideoCapture cap("circle.mp4") ;
    cv::Mat frame, mask,gray,bin,result;
    vector<vector<cv::Point>> contours; 
    vector<cv::Vec4i> hierarchy;
    cap >> frame;
    if (frame.empty()) return -1;
    mask = cv::Mat::zeros(frame.size(), CV_8UC1);
    cv::circle(mask,cv::Point(frame.cols/2, frame.rows/2),150, cv::Scalar(255), -1);
    for(;;){
        cap >> frame;
        if (frame.empty()) break;
        frame.copyTo(result, mask);
        cv::cvtColor(result, gray, cv::COLOR_BGR2GRAY);
        cv::threshold(gray, bin, 127, 255, cv::THRESH_BINARY);
        contours.clear();
        hierarchy.clear();
        cv::findContours(bin.clone(), contours, hierarchy,cv::RETR_EXTERNAL,cv::CHAIN_APPROX_SIMPLE);

        for (auto &c : contours) {
            if (cv::contourArea(c) < 500) continue;
            cv::drawContours(result, vector<vector<cv::Point>>{c}, -1,cv::Scalar(0,255,0), 2);
            cv::Rect box = cv::boundingRect(c);
            cv::rectangle(result, box, cv::Scalar(0,0,255), 2);
        }
            cv::imshow("masked", result);
            if (cv::waitKey(30) == 27) break;

    }

    cv::destroyAllWindows();
}