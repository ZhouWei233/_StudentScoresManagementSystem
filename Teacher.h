/*
��ʦ��
*/
#pragma once
#include "User.h"

<<<<<<< HEAD
class Teacher: public User
{
public:
=======
class Teacher : public User
{
public:
	Teacher(string account, string password, string name);
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
	void ShowClass();//�鿴��ѧ����Ϣ
	void GiveScores();//��ѧ�����
	void SubmitScores();//�ύ�ɼ����Խ�ѧ��Ϊ��λ��
	void ModifyScores(); //�޸ĳɼ�(�ɼ������ش�غ�)
	void ShowScores();//�鿴��ѧ��ĳɼ�
};
