#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScreen>
#include <QRect>
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QScreen *screen =
        QGuiApplication::primaryScreen();  // здесь и следующие 4 строки - задание
                                           // размера в пропорциях относительно
                                           // экрана устройства, на котором
                                           // открыта программа
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    resize(width * 0.8, height * 0.9);

//    ui->frame->setStyleSheet("border: 2px solid lavender;"
//                             "border-radius: 10px;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

