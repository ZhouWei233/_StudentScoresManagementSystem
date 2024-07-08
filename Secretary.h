#pragma once
#include"User.h"

class Secretary : public User
{
public:
	void ImportStuInfo();//导入学生信息（将信息写入学生）
	void ImportTeaInfo();//导入教师信息
	void ImportClassInfo();//导入教学班信息

	void ModifyStuInfo();	//修改学生信息()
	void ModifyTeaInfo();	//修改教师信息
	void ModifyClassInfo();//修改教学班信息

	void CheckScores();//审核成绩
	void ViewScores();//查看成绩
};


