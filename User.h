/*
�û��ࣨ�����˺š����룩
*/
#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include<string>
<<<<<<< HEAD
#include<vector>

#include"FileOperation.hpp"
=======
#include<map>
#include<algorithm>
#include<vector>

#include"FileOperation.h"
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228


class User
{
public:
<<<<<<< HEAD
	User(string name, string password) : name(name), password(password) {};
=======
	User() {};
	User(string account, string password,string name) :account(account), name(name), password(password) {};
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228

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
<<<<<<< HEAD
		for (auto& e: v)
=======
		for (auto& e : v)
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
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
<<<<<<< HEAD
=======

>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
