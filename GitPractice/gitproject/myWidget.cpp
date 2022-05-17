#include "myWidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

}

myWidget::~myWidget()
{
}

void myWidget::resizeEvent(QResizeEvent* event)
{
}
