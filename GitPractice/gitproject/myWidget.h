#pragma once

#include <QtWidgets/QWidget>
#include "ui_gitproject.h"

class myWidget : public QWidget
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = Q_NULLPTR);
    ~myWidget();

protected:
    void resizeEvent(QResizeEvent* event);

private:
    Ui::GitProjectClass ui;
    QWidget* _wgt2;
<<<<<<< HEAD
    QWidget* _wgt4;
    QWidget* _wgt5;
=======
>>>>>>> ae73ef8dadce6cd35dc0ce3e81b586700f6b530d
};
