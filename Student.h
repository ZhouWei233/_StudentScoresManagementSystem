#pragma once
#include "User.h"

class Student:public User
{
public:
	void login();
	void logout();
	void showScores();
};