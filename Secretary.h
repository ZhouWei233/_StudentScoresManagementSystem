/*
������
*/
#pragma once
#include"User.h"


class Secretary : public User
{
public:
	Secretary(string account, string password, string name);
	void AddInfo();	   //�����Ϣ
	void DeleteInfo(); //ɾ����Ϣ
	void ModifyInfo(); //�޸���Ϣ

	void CheckScores();//��˳ɼ�
	void ViewScores();//�鿴�ɼ�
};