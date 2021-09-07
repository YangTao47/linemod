#include "line2Dup.h"
#include <memory>
#include <iostream>
#include <assert.h>
#include <chrono>
#include<opencv2\opencv.hpp>
#include"gradientMatch.h"
using namespace std;
using namespace cv;

int main()
{
	lineModMatch test;
	test.MIPP_test();
	test.image_path("D:/", "D:/train.jpg", "D:/train.jpg");
	test.angle_test("test");

	return 0;
}