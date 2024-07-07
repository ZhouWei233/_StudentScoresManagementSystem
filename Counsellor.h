/*
辅导员类
*/
#pragma once
#include"User.h"

class Counsellor : public User
{
public:
	void ViewStuInfo();//查看学生信息
	void ViewStuScores();//查看学生成绩
};