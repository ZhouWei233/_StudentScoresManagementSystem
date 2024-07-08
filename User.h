/*
用户类（管理账号、密码）
*/
#pragma once
#include<iostream>
using namespace std;
#include<string>

class User
{
public:
	User(string name, string password) : name(name), password(password) {};

	string account = ""; //账号
	string password = "";//密码
	string name = ""; //姓名

	void ModifyPassword()//修改密码
	{
		
	}

};
