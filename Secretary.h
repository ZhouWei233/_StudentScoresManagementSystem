/*
������
*/
#pragma once
<<<<<<< HEAD
#include "User.h"
#include <algorithm>
=======
#include"User.h"

>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228

class Secretary : public User
{
public:
<<<<<<< HEAD
	FileOperation fileOper;

	void AddInfo();	   // �����Ϣ
	void DeleteInfo(); // ɾ����Ϣ
	void ModifyInfo(); // �޸���Ϣ

	void CheckScores();			 // ��˳ɼ�
	void ViewScores(int select); // �鿴�ɼ�
};
=======
	Secretary(string account, string password, string name);
	void AddInfo();	   //�����Ϣ
	void DeleteInfo(); //ɾ����Ϣ
	void ModifyInfo(); //�޸���Ϣ

	void CheckScores();//��˳ɼ�
	void ViewScores();//�鿴�ɼ�
};
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
