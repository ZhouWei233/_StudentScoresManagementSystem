/*
用户类（管理账号、密码）
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

	string account = ""; //账号
	string password = "";//密码
	string name = ""; //姓名


	void ModifyPassword(string account, string newPassword)//修改密码
	{
		//把文件中的数据读到容器v（v的每个元素是一个pair，pair的第一个元素是账号，第二个元素是密码）
		vector<pair<string, string>> v;
		ifstream ifs("UserFile.txt");
		string a, p;//账号、密码
		while (ifs >> a >> p)
		{
			v.push_back({ a,p });
		}
		ifs.close();

		//在容器v中查找目标账号，修改其密码
		//注意须使用引用，不然修改无效
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

		//把容器v中的数据写回文件
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
