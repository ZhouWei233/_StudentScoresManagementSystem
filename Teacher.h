/*
教师类
*/
#pragma once
#include "User.h"

class Teacher : public User
{
public:
	void ShowClass();//查看教学班信息
	void GiveScores();//给学生打分
	void SubmitScores();//提交成绩（以教学班为单位）
	void ModifyScores(); //修改成绩(成绩被教秘打回后)
	void ShowScores();//查看教学班的成绩
};
