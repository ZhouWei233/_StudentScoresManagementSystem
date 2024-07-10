#include"Teacher.h"

<<<<<<< HEAD
//�鿴��ѧ����Ϣ
void Teacher::ShowClass()
{

=======
extern FileOperation FO;//����һ���ļ������������ڶ�д�ļ�������

Teacher::Teacher(string account, string password, string name)
{
	this->account = account;
	this->password = password;
	this->name = name;
}


//�鿴��ѧ����Ϣ
void Teacher::ShowClass()
{
	//һЩ׼������
	vector<string> classNum;//�洢��ͬ�Ľ�ѧ���ͷ��
	vector<Item> stuTotal;//�洢�����ʦ��ȫ��ѧ��
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(),classNum.end(),stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//ÿ����ͷ��Ӧ��ѧ������
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}

	cout << "������Ϊ���ҵ������е����Ľ�ѧ�ࣺ" << endl;
	for (auto str : classNum)
	{
		cout << "�γ̱��: " << str << "  " << "�γ�����: " << ClassAndStudent[str][0].courseName << " " << "������ " << ClassAndStudent[str].size() << "" << endl;
	}

	//������ʵ�ְɣ������������Ŀγ̱����ѡ����
	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "������������������" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "ѧ�ţ� " << stu.stuID << "  " << "������ " << stu.stuName << endl;
		}

		break;
	}
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
}

//��ѧ�����
void Teacher::GiveScores()
{
<<<<<<< HEAD

=======
	//һЩ׼������
	vector<string> classNum;//�洢��ͬ�Ľ�ѧ���ͷ��
	vector<Item> stuTotal;//�洢�����ʦ��ȫ��ѧ��
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(), classNum.end(), stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//ÿ����ͷ��Ӧ��ѧ������
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}


	cout << "������Ϊ���ҵ������е����Ľ�ѧ��,��ѡ����Ҫ���ֵĽ�ѧ�ࣺ" << endl;
	for (auto str : classNum)
	{
		cout << "�γ̱��: " << str << "  " << "�γ�����: " << ClassAndStudent[str][0].courseName << " " << "������ " << ClassAndStudent[str].size() << "" << endl;
	}

	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "������������������" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "ѧ�ţ� " << stu.stuID << "  " << "������ " << stu.stuName << endl;
			cout << "��Ϊ��λͬѧ����" << endl;
			float score; cin >> score;
			stu.score = score;
		}

		break;
	}
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
}

//�ύ�ɼ����Խ�ѧ��Ϊ��λ��
void Teacher::SubmitScores()
{
<<<<<<< HEAD
=======
	//һЩ׼������
	vector<string> classNum;//�洢��ͬ�Ľ�ѧ���ͷ��
	vector<Item> stuTotal;//�洢�����ʦ��ȫ��ѧ��
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(), classNum.end(), stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//ÿ����ͷ��Ӧ��ѧ������
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}

	cout << "������Ϊ���ҵ������е����Ľ�ѧ��,��ѡ����Ҫ�ϴ��ɼ��Ľ�ѧ�ࣺ" << endl;
	for (auto str : classNum)
	{
		cout << "�γ̱��: " << str << "  " << "�γ�����: " << ClassAndStudent[str][0].courseName << " " << "������ " << ClassAndStudent[str].size() << "" << endl;
	}

	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "������������������" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "ѧ�ţ� " << stu.stuID << "  " << "������ " << stu.stuName << "  " << "ѧ���ɼ���" << stu.score << endl;
		}

		break;
	}

	cout << "ȷ���Ƿ��ϴ�" << endl;
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228

}

//�޸ĳɼ�(�ɼ������ش�غ�)
void Teacher::ModifyScores()
{

}

//�鿴�Լ���ѧ��ĳɼ�
void Teacher::ShowScores()
{
<<<<<<< HEAD

=======
	//һЩ׼������
	vector<string> classNum;//�洢��ͬ�Ľ�ѧ���ͷ��
	vector<Item> stuTotal;//�洢�����ʦ��ȫ��ѧ��
	for (auto stu : FO.Data)
	{
		stuTotal.push_back(stu);
		if (find(classNum.begin(), classNum.end(), stu.courseID) == classNum.end())
			classNum.push_back(stu.courseID);
	}
	map<string, vector<Item>> ClassAndStudent;//ÿ����ͷ��Ӧ��ѧ������
	for (auto course : classNum)
	{
		for (auto stu : stuTotal)
		{
			if (course == stu.courseID)
			{
				ClassAndStudent[course].push_back(stu);
			}
		}
	}

	cout << "������Ϊ���ҵ������е����Ľ�ѧ��,��ѡ����Ҫ�鿴�ɼ��Ľ�ѧ�ࣺ" << endl;
	for (auto str : classNum)
	{
		cout << "�γ̱��: " << str << "  " << "�γ�����: " << ClassAndStudent[str][0].courseName << " " << "������ " << ClassAndStudent[str].size() << "" << endl;
	}

	while (true)
	{
		string num; cin >> num;
		if (find(classNum.begin(), classNum.end(), num) == classNum.end())
		{
			cout << "������������������" << endl;
			continue;
		}

		for (auto stu : ClassAndStudent[num])
		{
			cout << "ѧ�ţ� " << stu.stuID << "  " << "������ " << stu.stuName << "  " << "ѧ���ɼ���" << stu.score << endl;
		}

		break;
	}
>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
}