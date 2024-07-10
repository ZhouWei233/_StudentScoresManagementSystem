<<<<<<< HEAD
#include "StudentScoresManagementSystem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StudentScoresManagementSystem w;
    w.show();
    return a.exec();
}
=======
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
//	tea.ShowClass();
//	tea.GiveScores();
//	tea.SubmitScores();
//	tea.ShowScores();
	Student stu("2023001011", "李明", "123456");
	stu.ViewScores();
	system("pause");
	return 0;
}
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
