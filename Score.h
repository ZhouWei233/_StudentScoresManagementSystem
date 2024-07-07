//成绩类
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Course.h"

class Scores
{
public:
	Course course; //课程(包含课程号、课程名、学分)
	string stuID; //学生号
	int score; //成绩

};

/*
管理成绩信息文件的类
*/
class User_File
{
public:

};