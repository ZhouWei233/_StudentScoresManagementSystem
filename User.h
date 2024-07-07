#pragma once
#include<iostream>
using namespace std;

class User
{
public:
	User(string name, string password) : name(name), password(password) {};

	string name = "";
	string password = "";

	virtual void login() = 0;
	virtual void logout() = 0;
	
};