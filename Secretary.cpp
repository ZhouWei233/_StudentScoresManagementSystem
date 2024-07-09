#include "Secretary.h"

// �����Ϣ
void Secretary::AddInfo()
{
    FileOperation fileOper; // ����FileOperationʵ���������ļ�

    string courseID, courseName, teaName, stuID, stuName;
    float credit;
    int score;

    cout << "������γ̺�: ";
    cin >> courseID;
    cout << "������γ���: ";
    cin >> courseName;
    cout << "������ѧ��: ";
    cin >> credit;
    cout << "�������ʦ��: ";
    cin >> teaName;
    cout << "������ѧ��ѧ��: ";
    cin >> stuID;
    cout << "������ѧ������: ";
    cin >> stuName;
    cout << "������ɼ�: ";
    cin >> score;

    Item newItem(courseID, courseName, credit, teaName, stuID, stuName, score);
    fileOper.Data.push_back(newItem);

    fileOper.UpdateFile(); // �����ļ�
    cout << "��Ϣ��ӳɹ���" << endl;
}

// ɾ����Ϣ
void Secretary::DeleteInfo()
{
    FileOperation fileOper; // ����FileOperationʵ���������ļ�

    string courseID, courseName, teaName, stuID, stuName;
    float credit;
    int score;

    cout << "������Ҫɾ������Ϣ��\n";
    cout << "�γ̺�: ";
    cin >> courseID;
    cout << "�γ���: ";
    cin >> courseName;
    cout << "ѧ��: ";
    cin >> credit;
    cout << "��ʦ��: ";
    cin >> teaName;
    cout << "ѧ��ѧ��: ";
    cin >> stuID;
    cout << "ѧ������: ";
    cin >> stuName;
    cout << "�ɼ�: ";
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
        fileOper.UpdateFile(); // �����ļ�
        cout << "��Ϣɾ���ɹ���" << endl;
    }
    else
    {
        cout << "δ�ҵ�ƥ�����Ϣ��" << endl;
    }
}

// �޸���Ϣ
void Secretary::ModifyInfo()
{
    FileOperation fileOper; // ����FileOperationʵ���������ļ�

    string stuID;
    cout << "������Ҫ�޸ĵ�ѧ��ѧ��: ";
    cin >> stuID;

    for (auto &item : fileOper.Data)
    {
        if (item.stuID == stuID)
        {
            cout << "�������µĿγ̺�(��ǰֵ��" << item.courseID << "): ";
            cin >> item.courseID;
            cout << "�������µĿγ���(��ǰֵ��" << item.courseName << "): ";
            cin >> item.courseName;
            cout << "�������µ�ѧ��(��ǰֵ��" << item.credit << "): ";
            cin >> item.credit;
            cout << "�������µĽ�ʦ��(��ǰֵ��" << item.teaName << "): ";
            cin >> item.teaName;
            cout << "�������µ�ѧ������(��ǰֵ��" << item.stuName << "): ";
            cin >> item.stuName;
            cout << "�������µĳɼ�(��ǰֵ��" << item.score << "): ";
            cin >> item.score;

            fileOper.UpdateFile(); // �����ļ�
            cout << "��Ϣ�޸ĳɹ���" << endl;
            return;
        }
    }
    cout << "δ�ҵ���ѧ������Ϣ��" << endl;
}

// ��˳ɼ�
void Secretary::CheckScores()
{
}

// �鿴�ɼ�
void Secretary::ViewScores(int select)
{
    FileOperation fileOper; // ����FileOperationʵ���������ļ�

    // 1������ѧ��Ϊ��λ����ӡ��ÿ���˵ĸ��ſγ̵ĳɼ�
    if (select == 1)
    {
        string stuID;
        cout << "������ѧ��ѧ��: ";
        cin >> stuID;
        for (const auto &item : fileOper.Data)
        {
            if (item.stuID == stuID)
            {
                cout << "�γ̺�: " << item.courseID << ", �γ���: " << item.courseName
                     << ", ѧ��: " << item.credit << ", ��ʦ: " << item.teaName
                     << ", �ɼ�: " << item.score << endl;
            }
        }
    }

    // 2�����տγ�ͷΪ��λ���ֱ��ӡÿ���γ̵�ѧ���ĸ��ſεĳɼ�
    if (select == 2)
    {
        string courseID;
        cout << "������γ̺�: ";
        cin >> courseID;
        for (const auto &item : fileOper.Data)
        {
            if (item.courseID == courseID)
            {
                cout << "ѧ��ѧ��: " << item.stuID << ", ѧ����: " << item.stuName
                     << ", �ɼ�: " << item.score << endl;
            }
        }
    }

    // 3�����տγ�����Ϊ��λ����ӡ���ſ�����ѧ���ĳɼ�
    if (select == 3)
    {
        string courseName;
        cout << "������γ���: ";
        cin >> courseName;
        for (const auto &item : fileOper.Data)
        {
            if (item.courseName == courseName)
            {
                cout << "ѧ��ѧ��: " << item.stuID << ", ѧ����: " << item.stuName
                     << ", �ɼ�: " << item.score << endl;
            }
        }
    }
}