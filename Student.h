/*
学生类
*/
#pragma once
#include "User.h"

<<<<<<< HEAD
class Student:public User
{
public:
	void ViewScores();//查看成绩
=======
class Student :public User
{
public:
	Student(string account, string password, string name);
	void ViewScores();//查看成绩
	float CalculateAverage(vector<pair<int, float>> scores);//计算平均分
	float CalculateGPA(vector<pair<int, float>> scores);//计算GPA
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
};
