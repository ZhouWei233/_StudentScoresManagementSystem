/*
��ʦ��
*/
#pragma once
#include "User.h"

class Teacher: public User
{
public:
	void showClass();//�鿴��ѧ����Ϣ
	void giveScore();//��ѧ�����
	void submmitScore();//�ύ�ɼ�
	void ModifiyScore(); //�޸ĳɼ�(�ɼ������ش�غ�)
	void showScore();//�鿴��ѧ��ĳɼ�
};

/*
�����ʦ��Ϣ�ļ�����
*/
class Tea_File
{
public:

};