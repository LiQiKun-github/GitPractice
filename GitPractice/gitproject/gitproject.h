#pragma once

#include <QtWidgets/QWidget>
#include "ui_gitproject.h"

class GitProject : public QWidget
{
    Q_OBJECT

public:
    GitProject(QWidget *parent = Q_NULLPTR);

private:
    Ui::GitProjectClass ui;
};
