#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ogl.h"
#include <QScreen>
#include <QRect>
#include <QFileDialog>
#include <QMainWindow>
#include <QtWidgets>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <Qt3DCore>
#include <Qt3DExtras>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->FileName->setStyleSheet("background-color: transparent; color: lavender");
    ui->LineVert->setStyleSheet("background-color: transparent;");
    ui->LineEdges->setStyleSheet("background-color: transparent;");

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    resize(width * 0.8, height * 0.9);

    OGLW *OGLWidget = new OGLW;
    ui->gridLayout_4->addWidget(OGLWidget, 1, 0);

    OGLWidget->

    connect(ui->FileButton, SIGNAL(pressed()), this, SLOT(FilePressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::FilePressed() {
    QString FindFile = QFileDialog::getOpenFileName(this,
                       tr("Select a file to open"), QDir::homePath(), tr("Text Files (*.obj)"));
    ui->FileName->setText(FindFile);
}

//void MainWindow::paintGL() {
//    glViewport(0,0, 0, 0);
//    glClearColor(0,1,0,0);
//}
