#pragma once
#include"User.h"

class Secretary : public User
{
public:
	void ImportStuInfo();//����ѧ����Ϣ������Ϣд��ѧ����
	void ImportTeaInfo();//�����ʦ��Ϣ
	void ImportClassInfo();//�����ѧ����Ϣ

	void ModifyStuInfo();	//�޸�ѧ����Ϣ()
	void ModifyTeaInfo();	//�޸Ľ�ʦ��Ϣ
	void ModifyClassInfo();//�޸Ľ�ѧ����Ϣ

	void CheckScores();//��˳ɼ�
	void ViewScores();//�鿴�ɼ�
};


