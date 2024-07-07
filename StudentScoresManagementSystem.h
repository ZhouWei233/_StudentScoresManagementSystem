#pragma once

#include <QtWidgets/QWidget>
#include "ui_StudentScoresManagementSystem.h"

class StudentScoresManagementSystem : public QWidget
{
    Q_OBJECT

public:
    StudentScoresManagementSystem(QWidget *parent = nullptr);
    ~StudentScoresManagementSystem();

private:
    Ui::StudentScoresManagementSystemClass ui;
};
