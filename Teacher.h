/*
教师类
*/
#pragma once
#include "User.h"

<<<<<<< HEAD
class Teacher: public User
{
public:
=======
class Teacher : public User
{
public:
	Teacher(string account, string password, string name);
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
	void ShowClass();//查看教学班信息
	void GiveScores();//给学生打分
	void SubmitScores();//提交成绩（以教学班为单位）
	void ModifyScores(); //修改成绩(成绩被教秘打回后)
	void ShowScores();//查看教学班的成绩
};
