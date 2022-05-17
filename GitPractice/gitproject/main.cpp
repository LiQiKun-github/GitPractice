#include "gitproject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GitProject w;
    w.show();
    return a.exec();
}
