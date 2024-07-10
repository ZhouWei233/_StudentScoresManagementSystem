#include "Secretary.h"

<<<<<<< HEAD
// 添加信息
void Secretary::AddInfo()
{
    FileOperation fileOper; // 创建FileOperation实例来操作文件

    string courseID, courseName, teaName, stuID, stuName;
    float credit;
    int score;

    cout << "请输入课程号: ";
    cin >> courseID;
    cout << "请输入课程名: ";
    cin >> courseName;
    cout << "请输入学分: ";
    cin >> credit;
    cout << "请输入教师名: ";
    cin >> teaName;
    cout << "请输入学生学号: ";
    cin >> stuID;
    cout << "请输入学生姓名: ";
    cin >> stuName;
    cout << "请输入成绩: ";
    cin >> score;

    Item newItem(courseID, courseName, credit, teaName, stuID, stuName, score);
    fileOper.Data.push_back(newItem);

    fileOper.UpdateFile(); // 更新文件
    cout << "信息添加成功！" << endl;
}

// 删除信息
void Secretary::DeleteInfo()
{
    FileOperation fileOper; // 创建FileOperation实例来操作文件

    string courseID, courseName, teaName, stuID, stuName;
    float credit;
    int score;

    cout << "请输入要删除的信息：\n";
    cout << "课程号: ";
    cin >> courseID;
    cout << "课程名: ";
    cin >> courseName;
    cout << "学分: ";
    cin >> credit;
    cout << "教师名: ";
    cin >> teaName;
    cout << "学生学号: ";
    cin >> stuID;
    cout << "学生姓名: ";
    cin >> stuName;
    cout << "成绩: ";
    cin >> score;

    Item targetItem(courseID, courseName, credit, teaName, stuID, stuName, score);

    auto it = std::find_if(fileOper.Data.begin(), fileOper.Data.end(),
                           [&targetItem](const Item &item)
                           {
                               return item.courseID == targetItem.courseID &&
                                      item.courseName == targetItem.courseName &&
                                      item.credit == targetItem.credit &&
                                      item.teaName == targetItem.teaName &&
                                      item.stuID == targetItem.stuID &&
                                      item.stuName == targetItem.stuName &&
                                      item.score == targetItem.score;
                           });

    if (it != fileOper.Data.end())
    {
        fileOper.Data.erase(it);
        fileOper.UpdateFile(); // 更新文件
        cout << "信息删除成功！" << endl;
    }
    else
    {
        cout << "未找到匹配的信息。" << endl;
    }
}

// 修改信息
void Secretary::ModifyInfo()
{
    FileOperation fileOper; // 创建FileOperation实例来操作文件

    string stuID;
    cout << "请输入要修改的学生学号: ";
    cin >> stuID;

    for (auto &item : fileOper.Data)
    {
        if (item.stuID == stuID)
        {
            cout << "请输入新的课程号(当前值：" << item.courseID << "): ";
            cin >> item.courseID;
            cout << "请输入新的课程名(当前值：" << item.courseName << "): ";
            cin >> item.courseName;
            cout << "请输入新的学分(当前值：" << item.credit << "): ";
            cin >> item.credit;
            cout << "请输入新的教师名(当前值：" << item.teaName << "): ";
            cin >> item.teaName;
            cout << "请输入新的学生姓名(当前值：" << item.stuName << "): ";
            cin >> item.stuName;
            cout << "请输入新的成绩(当前值：" << item.score << "): ";
            cin >> item.score;

            fileOper.UpdateFile(); // 更新文件
            cout << "信息修改成功！" << endl;
            return;
        }
    }
    cout << "未找到该学生的信息。" << endl;
}

// 审核成绩
void Secretary::CheckScores()
{
}

// 查看成绩
void Secretary::ViewScores(int select)
{
    FileOperation fileOper; // 创建FileOperation实例来操作文件

    // 1、按照学生为单位，打印出每个人的各门课程的成绩
    if (select == 1)
    {
        string stuID;
        cout << "请输入学生学号: ";
        cin >> stuID;
        for (const auto &item : fileOper.Data)
        {
            if (item.stuID == stuID)
            {
                cout << "课程号: " << item.courseID << ", 课程名: " << item.courseName
                     << ", 学分: " << item.credit << ", 教师: " << item.teaName
                     << ", 成绩: " << item.score << endl;
            }
        }
    }

    // 2、按照课程头为单位，分别打印每个课程的学生的该门课的成绩
    if (select == 2)
    {
        string courseID;
        cout << "请输入课程号: ";
        cin >> courseID;
        for (const auto &item : fileOper.Data)
        {
            if (item.courseID == courseID)
            {
                cout << "学生学号: " << item.stuID << ", 学生名: " << item.stuName
                     << ", 成绩: " << item.score << endl;
            }
        }
    }

    // 3、按照课程名字为单位，打印该门课所有学生的成绩
    if (select == 3)
    {
        string courseName;
        cout << "请输入课程名: ";
        cin >> courseName;
        for (const auto &item : fileOper.Data)
        {
            if (item.courseName == courseName)
            {
                cout << "学生学号: " << item.stuID << ", 学生名: " << item.stuName
                     << ", 成绩: " << item.score << endl;
            }
        }
    }
=======
Secretary::Secretary(string account, string password, string name)
{
	this->account = account;
	this->password = password;
	this->name = name;
}

//������Ϣ
void Secretary::AddInfo()
{

}

//ɾ����Ϣ
void Secretary::DeleteInfo()
{

}

//�޸���Ϣ
void Secretary::ModifyInfo()
{

}

//��˳ɼ�
void Secretary::CheckScores()
{

}

//�鿴�ɼ�
void Secretary::ViewScores()
{

>>>>>>> f9df26ee91b5a85b30e0477b631874906c983228
}