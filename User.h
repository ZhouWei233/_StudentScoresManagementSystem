/*
�û��ࣨ�����˺š����룩
*/
#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include<string>
#include<map>
#include<algorithm>
#include<vector>

#include"FileOperation.h"


class User
{
public:
	User(string name, string password) : name(name), password(password) {};

	string account = ""; //�˺�
	string password = "";//����
	string name = ""; //����


	void ModifyPassword(string account, string newPassword)//�޸�����
	{
		//���ļ��е����ݶ�������v��v��ÿ��Ԫ����һ��pair��pair�ĵ�һ��Ԫ�����˺ţ��ڶ���Ԫ�������룩
		vector<pair<string, string>> v;
		ifstream ifs("UserFile.txt");
		string a, p;//�˺š�����
		while (ifs >> a >> p)
		{
			v.push_back({ a,p });
		}
		ifs.close();

		//������v�в���Ŀ���˺ţ��޸�������
		//ע����ʹ�����ã���Ȼ�޸���Ч
		for (auto& e : v)
		{
			if (e.first == account)
			{
				e.second = newPassword;
				break;
			}
		}

		//������v�е�����д���ļ�
		ofstream ofs("UserFile.txt");
		for (auto e : v)
		{
			ofs << e.first << " " << e.second << endl;
		}
		ofs.close();
	}
};

