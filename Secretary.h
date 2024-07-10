/*
教秘类
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

	void AddInfo();	   // 添加信息
	void DeleteInfo(); // 删除信息
	void ModifyInfo(); // 修改信息

	void CheckScores();			 // 审核成绩
	void ViewScores(int select); // 查看成绩
};
=======
	Secretary(string account, string password, string name);
	void AddInfo();	   //添加信息
	void DeleteInfo(); //删除信息
	void ModifyInfo(); //修改信息

	void CheckScores();//审核成绩
	void ViewScores();//查看成绩
};
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
