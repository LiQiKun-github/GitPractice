#pragma once

#include <QtWidgets/QWidget>
#include "ui_gitproject.h"

class myWidget : public QWidget
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = Q_NULLPTR);

protected:
    void resizeEvent(QResizeEvent* event);

private:
    Ui::GitProjectClass ui;
};
