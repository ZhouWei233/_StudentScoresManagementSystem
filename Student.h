/*
ѧ����
*/
#pragma once
#include "User.h"

<<<<<<< HEAD
class Student:public User
{
public:
	void ViewScores();//�鿴�ɼ�
=======
class Student :public User
{
public:
	Student(string account, string password, string name);
	void ViewScores();//�鿴�ɼ�
	float CalculateAverage(vector<pair<int, float>> scores);//����ƽ����
	float CalculateGPA(vector<pair<int, float>> scores);//����GPA
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
};
