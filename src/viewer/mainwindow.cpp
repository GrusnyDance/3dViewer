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
    ui->FileName->setStyleSheet("background-color: transparent;");
    ui->LineVert->setStyleSheet("background-color: transparent;");
    ui->LineEdges->setStyleSheet("background-color: transparent;");

    QScreen *screen =
        QGuiApplication::primaryScreen();  // здесь и следующие 4 строки - задание
                                           // размера в пропорциях относительно
                                           // экрана устройства, на котором
                                           // открыта программа
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    resize(width * 0.8, height * 0.9);


}

MainWindow::~MainWindow()
{
    delete ui;
}

