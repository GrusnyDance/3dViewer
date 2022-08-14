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


    OGLWidget = new OGLW;
    ui->gridLayout_4->addWidget(OGLWidget, 1, 0);

    connect(ui->FileButton, SIGNAL(pressed()), this, SLOT(FilePressed()));

    connect(ui->MoveX, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
    connect(ui->MoveY, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
    connect(ui->MoveZ, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));

    connect(ui->RotateX, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
    connect(ui->RotateY, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
    connect(ui->RotateZ, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));

    connect(ui->Scale, SIGNAL(valueChanged(int)), this, SLOT(ScalePressed()));

    connect(ui->DisplayMoveX, SIGNAL(returnPressed()), this, SLOT(MoveUserInput()));
    connect(ui->DisplayMoveY, SIGNAL(returnPressed()), this, SLOT(MoveUserInput()));
    connect(ui->DisplayMoveZ, SIGNAL(returnPressed()), this, SLOT(MoveUserInput()));

    connect(ui->DisplayRotateX, SIGNAL(returnPressed()), this, SLOT(RotateUserInput()));
    connect(ui->DisplayRotateY, SIGNAL(returnPressed()), this, SLOT(RotateUserInput()));
    connect(ui->DisplayRotateZ, SIGNAL(returnPressed()), this, SLOT(RotateUserInput()));

    connect(ui->DisplayScale, SIGNAL(returnPressed()), this, SLOT(ScaleUserInput()));
}

MainWindow::~MainWindow()
{
    delete OGLWidget;
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

    CallMove(sliderName.right(1), sliderVal);
}


void MainWindow::CallMove(QString str, int val) {
    if (str[0] == 'X') {
        move_x(&(OGLWidget->inff), val);
    } else if (str[0] == 'Y') {
        move_y(&(OGLWidget->inff), val);
    } else {
        move_z(&(OGLWidget->inff), val);
    }
}

void MainWindow::RotatePressed() {
    QSlider *mySlider = (QSlider *)sender();
    QString sliderName = sender()->objectName();
    QString findQEdit = "Display" + sliderName;

    int sliderVal = mySlider->value();
    QString displayVal = QString::number(sliderVal);
    this->findChild<QLineEdit *>(findQEdit)->setText(displayVal);

    CallRotate(sliderName.right(1), sliderVal);
}

void MainWindow::CallRotate(QString str, int val) {
    if (str[0] == 'X') {
        rotate_x(&(OGLWidget->inff), val);
    } else if (str[0] == 'Y') {
        rotate_y(&(OGLWidget->inff), val);
    } else {
        rotate_z(&(OGLWidget->inff), val);
    }
}

void MainWindow::ScalePressed() {
    QSlider *mySlider = (QSlider *)sender();

    int sliderVal = mySlider->value();
    QString displayVal = QString::number(sliderVal);
    this->findChild<QLineEdit *>("DisplayScale")->setText(displayVal);

    scale(&(OGLWidget->inff), sliderVal);
}

void MainWindow::MoveUserInput() {
    QLineEdit *myQLine = (QLineEdit *)sender();
    QString lineVal = myQLine->text();
    QString myQLineName = sender()->objectName();

    QString mySliderName = myQLineName.right(5);

    bool isNum;
    int sliderVal = lineVal.toInt(&isNum);
    if (isNum) {
        if (sliderVal > 360) this->findChild<QSlider *>(mySliderName)->setValue(360);
        else if (sliderVal < -360) this->findChild<QSlider *>(mySliderName)->setValue(-360);
        else this->findChild<QSlider *>(mySliderName)->setValue(sliderVal);
        CallMove(mySliderName.right(1), sliderVal);

    } else {
        this->findChild<QLineEdit *>(myQLineName)->setText("");
        return;
    }
}


void MainWindow::RotateUserInput() {
    QLineEdit *myQLine = (QLineEdit *)sender();
    QString lineVal = myQLine->text();
    QString myQLineName = sender()->objectName();

    QString mySliderName = myQLineName.right(7);

    bool isNum;
    int sliderVal = lineVal.toInt(&isNum);
    if (isNum) {
        if (sliderVal > 720) this->findChild<QSlider *>(mySliderName)->setValue(720);
        else if (sliderVal < 0) this->findChild<QSlider *>(mySliderName)->setValue(0);
        else this->findChild<QSlider *>(mySliderName)->setValue(sliderVal);
        CallRotate(mySliderName.right(1), sliderVal);

    } else {
        this->findChild<QLineEdit *>(myQLineName)->setText("");
        return;
    }
}


void MainWindow::ScaleUserInput() {
    QLineEdit *myQLine = (QLineEdit *)sender();
    QString lineVal = myQLine->text();

    bool isNum;
    int sliderVal = lineVal.toInt(&isNum);
    if (isNum) {
        if (sliderVal < -10) this->findChild<QSlider *>("Scale")->setValue(-10);
        else if (sliderVal > 10) this->findChild<QSlider *>("Scale")->setValue(10);
        else this->findChild<QSlider *>("Scale")->setValue(sliderVal);
        scale(&(OGLWidget->inff), sliderVal);

    } else {
        this->findChild<QLineEdit *>("DisplayScale")->setText("");
        return;
    }
}

