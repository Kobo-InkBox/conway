#include <QApplication>
#include <QFile>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFont(QFont("u001"));
    QFile stylesheetFile("/etc/eink.qss");
    stylesheetFile.open(QFile::ReadOnly);
    w.setStyleSheet(stylesheetFile.readAll());
    stylesheetFile.close();
    w.show();
    
    return a.exec();
}
