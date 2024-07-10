#include<iostream>
#include"FileOperation.h"
#include"User.h"
#include"Teacher.h"
#include"Student.h"
#include"Course.h"
#include"Counsellor.h"
#include"Secretary.h"
using namespace std;

FileOperation FO;//创建一个文件操作对象，用于读写文件内数据


int main()
{
	Teacher tea( "01001","王艳", "123456");
	Student stu("2023001011", "李明", "123456");
	stu.ViewScores();
	return 0;
}