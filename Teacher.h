/*
教师类
*/
#pragma once
#include "User.h"

class Teacher: public User
{
public:
	void showClass();//查看教学班信息
	void giveScore();//给学生打分
	void submmitScore();//提交成绩
	void ModifiyScore(); //修改成绩(成绩被教秘打回后)
	void showScore();//查看教学班的成绩
};

/*
管理教师信息文件的类
*/
class Tea_File
{
public:

};