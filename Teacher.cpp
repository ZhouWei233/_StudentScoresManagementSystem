#include"Teacher.h"

<<<<<<< HEAD
//查看教学班信息
void Teacher::ShowClass()
{

=======
extern FileOperation FO;//创建一个文件操作对象，用于读写文件内数据

Teacher::Teacher(string account, string password, string name)
{
	this->account = account;
	this->password = password;
	this->name = name;
}


//查看教学班信息
void Teacher::ShowClass()
{
	//一些准备工作
	vector<string> classNum;//存储不同的教学班课头的
	vector<Item> stuTotal;//存储这个老师的全部学生
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(),classNum.end(),stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//每个课头对应的学生名单
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}

	cout << "以下是为您找到的所有的您的教学班：" << endl;
	for (auto str : classNum)
	{
		cout << "课程编号: " << str << "  " << "课程名称: " << ClassAndStudent[str][0].courseName << " " << "人数： " << ClassAndStudent[str].size() << "" << endl;
	}

	//这里先实现吧，就是输入具体的课程编号来选择了
	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "输入有误，请重新输入" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "学号： " << stu.stuID << "  " << "姓名： " << stu.stuName << endl;
		}

		break;
	}
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
}

//给学生打分
void Teacher::GiveScores()
{
<<<<<<< HEAD

=======
	//一些准备工作
	vector<string> classNum;//存储不同的教学班课头的
	vector<Item> stuTotal;//存储这个老师的全部学生
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(), classNum.end(), stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//每个课头对应的学生名单
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}


	cout << "以下是为您找到的所有的您的教学班,请选择您要评分的教学班：" << endl;
	for (auto str : classNum)
	{
		cout << "课程编号: " << str << "  " << "课程名称: " << ClassAndStudent[str][0].courseName << " " << "人数： " << ClassAndStudent[str].size() << "" << endl;
	}

	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "输入有误，请重新输入" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "学号： " << stu.stuID << "  " << "姓名： " << stu.stuName << endl;
			cout << "请为这位同学评分" << endl;
			float score; cin >> score;
			stu.score = score;
		}

		break;
	}
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
}

//提交成绩（以教学班为单位）
void Teacher::SubmitScores()
{
<<<<<<< HEAD
=======
	//一些准备工作
	vector<string> classNum;//存储不同的教学班课头的
	vector<Item> stuTotal;//存储这个老师的全部学生
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(), classNum.end(), stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//每个课头对应的学生名单
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}

	cout << "以下是为您找到的所有的您的教学班,请选择您要上传成绩的教学班：" << endl;
	for (auto str : classNum)
	{
		cout << "课程编号: " << str << "  " << "课程名称: " << ClassAndStudent[str][0].courseName << " " << "人数： " << ClassAndStudent[str].size() << "" << endl;
	}

	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "输入有误，请重新输入" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "学号： " << stu.stuID << "  " << "姓名： " << stu.stuName << "  " << "学生成绩：" << stu.score << endl;
		}

		break;
	}

	cout << "确认是否上传" << endl;
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228

}

//修改成绩(成绩被教秘打回后)
void Teacher::ModifyScores()
{

}

//查看自己教学班的成绩
void Teacher::ShowScores()
{
<<<<<<< HEAD

=======
	//一些准备工作
	vector<string> classNum;//存储不同的教学班课头的
	vector<Item> stuTotal;//存储这个老师的全部学生
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(), classNum.end(), stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//每个课头对应的学生名单
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}

	cout << "以下是为您找到的所有的您的教学班,请选择您要查看成绩的教学班：" << endl;
	for (auto str : classNum)
	{
		cout << "课程编号: " << str << "  " << "课程名称: " << ClassAndStudent[str][0].courseName << " " << "人数： " << ClassAndStudent[str].size() << "" << endl;
	}

	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "输入有误，请重新输入" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "学号： " << stu.stuID << "  " << "姓名： " << stu.stuName << "  " << "学生成绩：" << stu.score << endl;
		}

		break;
	}
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
}