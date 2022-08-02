#include "MainWindow.h"

#include <QApplication>

/*
 * language test. hangul is broken.
 *
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
