/*
��ʦ��
*/
#pragma once
#include "User.h"

class Teacher : public User
{
public:
	void ShowClass();//�鿴��ѧ����Ϣ
	void GiveScores();//��ѧ�����
	void SubmitScores();//�ύ�ɼ����Խ�ѧ��Ϊ��λ��
	void ModifyScores(); //�޸ĳɼ�(�ɼ������ش�غ�)
	void ShowScores();//�鿴��ѧ��ĳɼ�
};
