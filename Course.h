/*
课程类
*/
#pragma once
#include<iostream>
using namespace std;
#include<string>

class Course
{
public:
	string courseID;//课程号
	string courseName;//课程名
	float credit;//学分(可能有0.5,3.5学分)
};