#pragma once

#include <QtWidgets/QWidget>
#include "ui_myWidget.h"

class myWidget : public QWidget
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = Q_NULLPTR);
    ~myWidget();

protected:
    void resizeEvent(QResizeEvent* event);

private:
    Ui::myWidget ui;
};
