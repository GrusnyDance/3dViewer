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
#include <QObject>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->FileName->setStyleSheet("background-color: transparent; color: lavender;");
    ui->DisplayVertices->setStyleSheet("background-color: transparent;");
    ui->DisplayEdges->setStyleSheet("background-color: transparent;");

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    resize(width * 0.8, height * 0.9);

    OGLW *OGLWidget = new OGLW;
    ui->gridLayout_4->addWidget(OGLWidget, 1, 0);

    connect(ui->FileButton, SIGNAL(pressed()), this, SLOT(FilePressed()));

    connect(ui->MoveX, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
    connect(ui->MoveY, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
    connect(ui->MoveZ, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));

    connect(ui->RotateX, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
    connect(ui->RotateY, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
    connect(ui->RotateZ, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));

    connect(ui->Scale, SIGNAL(valueChanged(int)), this, SLOT(ScalePressed()));

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

void MainWindow::MovePressed() {
    QSlider *mySlider = (QSlider *)sender();
    QString sliderName = sender()->objectName();
    QString findQEdit = "Display" + sliderName;

    int sliderVal = mySlider->value();
    QString displayVal = QString::number(sliderVal);
    this->findChild<QLineEdit *>(findQEdit)->setText(displayVal);
}

void MainWindow::RotatePressed() {
    QSlider *mySlider = (QSlider *)sender();
    QString sliderName = sender()->objectName();
    QString findQEdit = "Display" + sliderName;

    int sliderVal = mySlider->value();
    QString displayVal = QString::number(sliderVal);
    this->findChild<QLineEdit *>(findQEdit)->setText(displayVal);
}

void MainWindow::ScalePressed() {
    QSlider *mySlider = (QSlider *)sender();
    QString sliderName = sender()->objectName();
    QString findQEdit = "Display" + sliderName;

    int sliderVal = mySlider->value();
    QString displayVal = QString::number(sliderVal);
    this->findChild<QLineEdit *>(findQEdit)->setText(displayVal);
}





