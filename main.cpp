#include<iostream>
#include"FileOperation.h"
#include"User.h"
#include"Teacher.h"
#include"Student.h"
#include"Course.h"
#include"Counsellor.h"
#include"Secretary.h"
using namespace std;

FileOperation FO;//����һ���ļ������������ڶ�д�ļ�������


int main()
{
	Teacher tea( "01001","����", "123456");
	Student stu("2023001011", "����", "123456");
	stu.ViewScores();
	return 0;
}