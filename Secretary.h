/*
教秘类
*/
#pragma once
#include "User.h"
#include <algorithm>

class Secretary : public User
{
public:
	FileOperation fileOper;

	void AddInfo();	   // 添加信息
	void DeleteInfo(); // 删除信息
	void ModifyInfo(); // 修改信息

	void CheckScores();			 // 审核成绩
	void ViewScores(int select); // 查看成绩
};
