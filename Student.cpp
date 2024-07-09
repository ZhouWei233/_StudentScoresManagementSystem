#include"Student.h"
extern FileOperation FO;//创建一个文件操作对象，用于读写文件内数据

Student::Student(string account, string password, string name)
{
	this->account = account;
	this->password = password;
	this->name = name;
}

//查看成绩
void Student::ViewScores()
{
	vector<Item> myItems;//从文件中截取出该学生的信息
	vector<pair<int, float>> scores;//用于存放该学生的成绩(第一项：分数 第二项：学分)
	for (auto e : FO.Data)
	{
		if (e.stuName == this->name)
		{
			myItems.push_back(e);
			scores.push_back(make_pair(e.score, e.credit));
		}
	}

	float Ave = CalculateAverage(scores);
	float GPA = CalculateGPA(scores);

	for (auto e : myItems)
	{
		cout << e.courseName << " " << e.score << endl;
	}

	cout << "均分：" << Ave << endl;
	cout << "GPA：" << GPA << endl;

}

//计算均分
float CalculateAverage(vector<pair<int, float>> scores)
{
	float totalScores = 0;//总学分绩（分数*学分）
	float totalCredits = 0;//总学分
	for (auto e : scores)
	{
		totalScores += e.first * e.second;
		totalCredits += e.second;
	}
	return totalScores / totalCredits;
}

//计算GPA
float CalculateGPA(vector<pair<int, float>> scores)
{
	//将分数转换为绩点
	float arr[100];
	int i = 0;
	/*设置分数段
	90-100：4.0
	85-89：	3.7
	82-84：	3.3
	78-81：	3.0
	75-77：	2.7
	72-74：	2.3
	68-71：	2.0
	64-67	1.5
	60-63	1.0
	0-59	0.0
	*/
	for (; i < 60; i++)
	{
		arr[i] = 0.0;
	}
	for (; i < 64; i++)
	{
		arr[i] = 1.0;
	}
	for (; i < 68; i++)
	{
		arr[i] = 1.5;
	}
	for (; i < 72; i++)
	{
		arr[i] = 2.0;
	}
	for (; i < 75; i++)
	{
		arr[i] = 2.3;
	}
	for (; i < 78; i++)
	{
		arr[i] = 2.7;
	}
	for (; i < 82; i++)
	{
		arr[i] = 3.0;
	}
	for (; i < 85; i++)
	{
		arr[i] = 3.3;
	}
	for (; i < 89; i++)
	{
		arr[i] = 3.7;
	}
	for (; i < 100; i++)
	{
		arr[i] = 4.0;
	}

	//计算GPA
	float GP = 0.0;//总学分绩点(绩点*学分)
	float totalCredits;//总学分
	for (auto e : scores)
	{
		GP += arr[e.first] * e.second;
		totalCredits += e.second;
	}
	return GP / totalCredits;
}