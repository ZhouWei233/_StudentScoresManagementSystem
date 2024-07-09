/*
教秘类
*/
#pragma once
#include"User.h"


class Secretary : public User
{
public:
	Secretary(string account, string password, string name);
	void AddInfo();	   //添加信息
	void DeleteInfo(); //删除信息
	void ModifyInfo(); //修改信息

	void CheckScores();//审核成绩
	void ViewScores();//查看成绩
};