#include"Student.h"
extern FileOperation FO;//����һ���ļ������������ڶ�д�ļ�������

Student::Student(string account, string password, string name)
{
	this->account = account;
	this->password = password;
	this->name = name;
}

//�鿴�ɼ�
void Student::ViewScores()
{
	vector<Item> myItems;//���ļ��н�ȡ����ѧ������Ϣ
	vector<pair<int, float>> scores;//���ڴ�Ÿ�ѧ���ĳɼ�(��һ����� �ڶ��ѧ��)
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

	cout << "���֣�" << Ave << endl;
	cout << "GPA��" << GPA << endl;

}

//�������
float CalculateAverage(vector<pair<int, float>> scores)
{
	float totalScores = 0;//��ѧ�ּ�������*ѧ�֣�
	float totalCredits = 0;//��ѧ��
	for (auto e : scores)
	{
		totalScores += e.first * e.second;
		totalCredits += e.second;
	}
	return totalScores / totalCredits;
}

//����GPA
float CalculateGPA(vector<pair<int, float>> scores)
{
	//������ת��Ϊ����
	float arr[100];
	int i = 0;
	/*���÷�����
	90-100��4.0
	85-89��	3.7
	82-84��	3.3
	78-81��	3.0
	75-77��	2.7
	72-74��	2.3
	68-71��	2.0
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

	//����GPA
	float GP = 0.0;//��ѧ�ּ���(����*ѧ��)
	float totalCredits;//��ѧ��
	for (auto e : scores)
	{
		GP += arr[e.first] * e.second;
		totalCredits += e.second;
	}
	return GP / totalCredits;
}