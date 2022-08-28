#include "mainwindow.h"

#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleSheetFile(":/new/window_style/SpyBot.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);

    MainWindow w;
    w.show();

    a.exec();
    styleSheetFile.close();
    return 0;
}
