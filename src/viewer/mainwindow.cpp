#include "mainwindow.h"

#include <QFileDialog>
#include <QMainWindow>
#include <QObject>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QRect>
#include <QScreen>
#include <Qt3DCore>
#include <Qt3DExtras>
#include <QtWidgets>

#include "ogl.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  ui->FileName->setStyleSheet(
      "background-color: transparent; color: lavender;");

  //    ui->DisplayVertices->setStyleSheet("background-color: transparent;");
  //    ui->DisplayEdges->setStyleSheet("background-color: transparent;");

  QScreen *screen = QGuiApplication::primaryScreen();
  QRect screenGeometry = screen->geometry();
  int height = screenGeometry.height();
  int width = screenGeometry.width();
  resize(width * 0.8, height * 0.9);

  OGLWidget = new OGLW;
  ui->gridLayout_4->addWidget(OGLWidget, 1, 0);

  connect(ui->FileButton, SIGNAL(pressed()), this, SLOT(FilePressed()));
  //    connect(ui->FileButton, SIGNAL(pressed()), OGLWidget, SLOT(Allocate()));

  connect(ui->MoveX, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
  connect(ui->MoveY, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
  connect(ui->MoveZ, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));

  connect(ui->RotateX, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
  connect(ui->RotateY, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
  connect(ui->RotateZ, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));

  connect(ui->Scale, SIGNAL(valueChanged(int)), this, SLOT(ScalePressed()));

  connect(ui->DisplayMoveX, SIGNAL(returnPressed()), this,
          SLOT(MoveUserInput()));
  connect(ui->DisplayMoveY, SIGNAL(returnPressed()), this,
          SLOT(MoveUserInput()));
  connect(ui->DisplayMoveZ, SIGNAL(returnPressed()), this,
          SLOT(MoveUserInput()));

  connect(ui->DisplayRotateX, SIGNAL(returnPressed()), this,
          SLOT(RotateUserInput()));
  connect(ui->DisplayRotateY, SIGNAL(returnPressed()), this,
          SLOT(RotateUserInput()));
  connect(ui->DisplayRotateZ, SIGNAL(returnPressed()), this,
          SLOT(RotateUserInput()));

  connect(ui->DisplayScale, SIGNAL(returnPressed()), this,
          SLOT(ScaleUserInput()));

  connect(OGLWidget, SIGNAL(mouseMove()), this, SLOT(updateSliders()));
}

MainWindow::~MainWindow() {
  delete OGLWidget;
  delete ui;
}

void MainWindow::updateSliders() {
  int xRot = abs(OGLWidget->rotateBuffX % 720),
      yRot = abs(OGLWidget->rotateBuffY % 720);
  ui->RotateX->setValue(xRot);
  ui->RotateY->setValue(yRot);
  ui->DisplayRotateX->setText(QString::number(xRot));
  ui->DisplayRotateY->setText(QString::number(yRot));
}

void MainWindow::FilePressed() {
  OGLWidget->FindFile =
      QFileDialog::getOpenFileName(this, tr("Select a file to open"),
                                   QDir::homePath(), tr("Text Files (*.obj)"));
  ui->FileName->setText(OGLWidget->FindFile);
  parserr((char *)OGLWidget->FindFile.toStdString().c_str(),
          &(OGLWidget->inff));
  OGLWidget->Allocate();
  ui->DisplayEdges->setText(QString::number(OGLWidget->inff.indexF / 3));
  ui->DisplayVertices->setText(QString::number(OGLWidget->inff.indexV / 3));
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
  QVector4D moveMatCol = OGLWidget->moveM.column(3);
  //    if (str[0] == 'X') {
  //        move_x(&(OGLWidget->inff), val - moveBuffX);
  //        moveBuffX = val;
  //    } else if (str[0] == 'Y') {
  //        move_y(&(OGLWidget->inff), val - moveBuffY);
  //        moveBuffY = val;
  //    } else {
  //        move_z(&(OGLWidget->inff), val - moveBuffZ);
  //        moveBuffZ = val;
  //    }
  if (str[0] == 'X') {
    moveMatCol.setX(val / 100.0);
  } else if (str[0] == 'Y') {
    moveMatCol.setY(val / 100.0);
  } else {
    moveMatCol.setZ(val / 100.0);
  }
  OGLWidget->moveM.setColumn(3, moveMatCol);
  OGLWidget->update();
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
    OGLWidget->rotateBuffX = val;
  } else if (str[0] == 'Y') {
    OGLWidget->rotateBuffY = val;
  } else {
    OGLWidget->rotateBuffZ = val;
  }
  OGLWidget->rotateM = OGLWidget->makeRotateM(
      OGLWidget->rotateBuffX, OGLWidget->rotateBuffY, OGLWidget->rotateBuffZ);
  OGLWidget->update();
}

void MainWindow::ScalePressed() {
  QSlider *mySlider = (QSlider *)sender();

  float sliderVal = mySlider->value() / 100.0;
  QString displayVal = QString::number(sliderVal);
  this->findChild<QLineEdit *>("DisplayScale")->setText(displayVal);

  //    scale(&(OGLWidget->inff), sliderVal - scaleBuff);
  //    scaleBuff = sliderVal;

  OGLWidget->scaleM.setToIdentity();
  OGLWidget->scaleM *= sliderVal;
  OGLWidget->scaleM.setColumn(3, QVector4D(0, 0, 0, 1));
  OGLWidget->update();
}

void MainWindow::MoveUserInput() {
  QLineEdit *myQLine = (QLineEdit *)sender();
  QString lineVal = myQLine->text();
  QString myQLineName = sender()->objectName();

  QString mySliderName = myQLineName.right(5);

  bool isNum;
  int sliderVal = lineVal.toInt(&isNum);
  if (isNum) {
    if (sliderVal > 360)
      this->findChild<QSlider *>(mySliderName)->setValue(360);
    else if (sliderVal < -360)
      this->findChild<QSlider *>(mySliderName)->setValue(-360);
    else
      this->findChild<QSlider *>(mySliderName)->setValue(sliderVal);
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
    if (sliderVal > 720)
      this->findChild<QSlider *>(mySliderName)->setValue(720);
    else if (sliderVal < 0)
      this->findChild<QSlider *>(mySliderName)->setValue(0);
    else
      this->findChild<QSlider *>(mySliderName)->setValue(sliderVal);
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
  double sliderVal = lineVal.toDouble(&isNum);
  if (isNum) {
    if (sliderVal < 0) {
      this->findChild<QSlider *>("Scale")->setValue(0);
      sliderVal = 0;
    } else if (sliderVal > 3) {
      this->findChild<QSlider *>("Scale")->setValue(300);
      sliderVal = 3;
    } else
      this->findChild<QSlider *>("Scale")->setValue((int)(sliderVal * 100));
    //        scale(&(OGLWidget->inff), sliderVal - scaleBuff);
    //        scaleBuff = sliderVal;

    OGLWidget->scaleM.setToIdentity();
    OGLWidget->scaleM *= sliderVal;
    OGLWidget->scaleM.setColumn(3, QVector4D(0, 0, 0, 1));
    OGLWidget->update();

  } else {
    this->findChild<QLineEdit *>("DisplayScale")->setText("");
    return;
  }
}
