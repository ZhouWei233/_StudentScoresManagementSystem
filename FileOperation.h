/*
	用于操作文件MainFile的类
*/
#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#define File "test_file.txt"

//文件中的一条信息
class Item
{
public:
	string courseID;//课程号
	string courseName;//课程名
	float credit;//学分
	string teaName;//教师
	string stuID;//学号
	string stuName;//学生名
	int score = -1;//成绩

	Item(string a, string b, float c, string d, string e, string f, int g) :
		courseID(a), courseName(b), credit(c), teaName(d), stuID(e), stuName(f), score(g) {}
};

class FileOperation
{
public:

	//记录数据的容器  key : 记录的序号
	//  value : 每条记录中的所有信息（以键值对形式）
	vector<Item> Data;

	//构造函数（初始化文件中的数据到容器中）
	FileOperation()
	{
		ifstream ifs(File);
		string a, b, d, e, f;
		float c;
		int g;
		while (ifs >> a >> b >> c >> d >> e >> f >> g)
		{
			Item item(a, b, c, d, e, f, g);
			Data.push_back(item);
		}
		ifs.close();
	}

	//更新文件(将容器中现在的数据写入文件中)
	void UpdateFile()
	{
		ofstream ofs(File, ios::out | ios::trunc);
		for (auto item : Data)
		{
			ofs << item.courseID << " " << item.courseName << " " << item.credit << " "
				<< item.teaName << " " << item.stuID << " " << item.stuName << " " << item.score << endl;
		}
		ofs.close();
	}

};
