/*
辅导员类
*/
#pragma once
#include"User.h"

class Counsellor : public User
{
public:
	Counsellor(string account, string password, string name);
	void ViewStuInfo();//查看学生信息
	void ViewStuScores();//查看学生成绩
};