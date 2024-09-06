#include "mainlauncher.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainLauncher w;
    w.show();
    return a.exec();
}
