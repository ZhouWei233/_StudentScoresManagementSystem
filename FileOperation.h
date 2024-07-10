/*
	���ڲ����ļ�MainFile����
*/
#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#define File "test_file.txt"

//�ļ��е�һ����Ϣ
class Item
{
public:
	string courseID;//�γ̺�
	string courseName;//�γ���
	float credit;//ѧ��
	string teaName;//��ʦ
	string stuID;//ѧ��
	string stuName;//ѧ����
	int score = -1;//�ɼ�

	Item(string a, string b, float c, string d, string e, string f, int g) :
		courseID(a), courseName(b), credit(c), teaName(d), stuID(e), stuName(f), score(g) {}
};

class FileOperation
{
public:

	//��¼���ݵ�����  key : ��¼�����
	//  value : ÿ����¼�е�������Ϣ���Լ�ֵ����ʽ��
	vector<Item> Data;

	//���캯������ʼ���ļ��е����ݵ������У�
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

	//�����ļ�(�����������ڵ�����д���ļ���)
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
