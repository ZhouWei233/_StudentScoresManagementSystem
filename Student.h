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
};
