#pragma once
#include"User.h"

class Secretary : public User
{
public:
	void ImportStuInfo();//����ѧ����Ϣ
	void ImportTeaInfo();//�����ʦ��Ϣ
	void ImportClassInfo();//�����ѧ����Ϣ

	void ModifiyStuInfo();	//�޸�ѧ����Ϣ
	void ModifiyTeaInfo();	//�޸Ľ�ʦ��Ϣ
	void ModifiyClassInfo();//�޸Ľ�ѧ����Ϣ

	void CheckScores();//��˳ɼ�
	void ViewScores();//�鿴�ɼ�
};


