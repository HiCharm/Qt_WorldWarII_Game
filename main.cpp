#include "firstwidget.h"

#include <QApplication>

// 作者：陈宇涛

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    firstWidget w;
    w.show();
    return a.exec();
}
