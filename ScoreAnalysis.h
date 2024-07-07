/*
成绩分析类：
针对每个角色都有一个大函数，每个大函数中包含多个小函数，每个小函数负责分析某一方面的成绩。
*/
#pragma once
#include<iostream>
using namespace std;
#include"Score.h"

class scoresAnalysis
{
public:
	void StuScoresAnalysis();//学生成绩分析
	void TeaScoresAnalysis();//教师成绩分析
	void SecScoresAnalysis();//教秘成绩分析
	void CounScoresAnalysis();//辅导员成绩分析
};
