/*
������
*/
#pragma once
#include "User.h"
#include <algorithm>

class Secretary : public User
{
public:
	FileOperation fileOper;

	void AddInfo();	   // �����Ϣ
	void DeleteInfo(); // ɾ����Ϣ
	void ModifyInfo(); // �޸���Ϣ

	void CheckScores();			 // ��˳ɼ�
	void ViewScores(int select); // �鿴�ɼ�
};
