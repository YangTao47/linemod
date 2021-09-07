#pragma once
#include "line2Dup.h"
#include <memory>
#include <iostream>
#include <assert.h>
#include <chrono>
#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;

class lineModMatch
{
public:
	/*多尺寸、单角度模板训练匹配（一张图内智能匹配单个目标）*/
	void scale_test(string mode = "test", int num_feature = 38, int retain_nums = 5, float low_scale_value = 0.1f,
					float high_scale_value = 1, float scale_step = 0.01f);
	/*多角度、单尺度模板训练匹配（一张图内智能匹配单个目标）use_rot是否直接使用旋转初始图特征点*/
	void angle_test(string mode = "test", bool use_rot = true, int num_feature = 20, int retain_nums = 1,
					float low_angle_value = 0, float high_angle_value = 360, float angle_step = 1, float scale_range = 1);
	/*多角度、多尺度带噪声模板训练匹配（一张图内可以匹配多个目标）*/
	void noise_test(string mode = "test", int num_feature = 38, float low_angle_value = 0,
					float high_angle_value = 360, float angle_step = 1, float low_scale_range = 0.9f,
					float high_scale_range = 1, float scale_step = 0.1f);
	void image_path(string infoSave, string trainImage, string testImage);
	void MIPP_test();

private:
	string infoSave = "";
	string trainImage = "";
	string testImage = "";
};
