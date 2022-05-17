#include "myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void myWidget::resizeEvent(QResizeEvent* event)
{
}
