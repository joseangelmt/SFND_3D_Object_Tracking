
#ifndef lidarData_hpp
#define lidarData_hpp

#include <stdio.h>
#include <fstream>
#include <string>

#include "dataStructures.h"

void cropLidarPoints(std::vector<LidarPoint> &lidarPoints, float minX, float maxX, float maxY, float minZ, float maxZ, float minR);
void loadLidarFromFile(std::vector<LidarPoint> &lidarPoints, std::string filename);

void showLidarTopview(std::vector<LidarPoint> &lidarPoints, cv::Size worldSize, cv::Size imageSize, bool bWait=true);

#if defined(SHOW_LIDAR_TOPVIEW_WITH_GROUND) || defined(SHOW_LIDAR_TOPVIEW_WITHOUTH_GROUND)
void showLidarTopviewAndCreatePng(std::vector<LidarPoint>& lidarPoints, cv::Size worldSize, cv::Mat image, int index, bool deleteGround, bool bWait = true);
#endif

void showLidarImgOverlay(cv::Mat &img, const std::vector<LidarPoint> &lidarPoints, cv::Mat &P_rect_xx, cv::Mat &R_rect_xx, cv::Mat &RT, cv::Mat *extVisImg=nullptr, const cv::Scalar* color=nullptr);
#endif /* lidarData_hpp */
