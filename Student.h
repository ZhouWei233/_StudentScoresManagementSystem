/*
ѧ����
*/
#pragma once
#include "User.h"

class Student :public User
{
public:
	Student(string account, string password, string name);
	void ViewScores();//�鿴�ɼ�
	float CalculateAverage(vector<pair<int, float>> scores);//����ƽ����
	float CalculateGPA(vector<pair<int, float>> scores);//����GPA
};
