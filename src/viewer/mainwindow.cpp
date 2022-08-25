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

  QScreen *screen = QGuiApplication::primaryScreen();
  QRect screenGeometry = screen->geometry();
  int height = screenGeometry.height();
  int width = screenGeometry.width();
  resize(width * 0.8, height * 0.9);

  OGLWidget = new OGLW;
  ui->gridLayout_4->addWidget(OGLWidget, 0, 0);

  ui->widget->setStyleSheet("background-color: transparent;");
  ui->GifButton->setParent(OGLWidget);
  ui->GifButton->raise();
  ui->GifButton->setMinimumSize(OGLWidget->width() / 11,
                                OGLWidget->height() / 25);

  ui->JpgButton->setParent(OGLWidget);
  ui->JpgButton->raise();
  ui->JpgButton->setMinimumSize(OGLWidget->width() / 11,
                                OGLWidget->height() / 25);

  ui->BmpButton->setParent(OGLWidget);
  ui->BmpButton->raise();
  ui->BmpButton->setMinimumSize(OGLWidget->width() / 11,
                                OGLWidget->height() / 25);

  this->initSliders();
  connect(ui->FileButton, SIGNAL(pressed()), this, SLOT(FilePressed()));
  //    connect(ui->FileButton, SIGNAL(pressed()), OGLWidget, SLOT(Allocate()));

  connect(ui->MoveX, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
  connect(ui->MoveY, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));
  connect(ui->MoveZ, SIGNAL(valueChanged(int)), this, SLOT(MovePressed()));

  connect(ui->RotateX, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
  connect(ui->RotateY, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));
  connect(ui->RotateZ, SIGNAL(valueChanged(int)), this, SLOT(RotatePressed()));

  connect(ui->Scale, SIGNAL(valueChanged(int)), this, SLOT(ScalePressed()));

  connect(ui->GifButton, SIGNAL(pressed()), this, SLOT(pressGIF()));
  connect(ui->BmpButton, SIGNAL(pressed()), this, SLOT(screenBMP()));
  connect(ui->JpgButton, SIGNAL(pressed()), this, SLOT(screenJPG()));

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

void MainWindow::initSliders() {
  ui->VertSizeSlider->setValue(OGLWidget->pointSize * 10);
  ui->EdgeSizeSlider->setValue(OGLWidget->lineWidth * 10);
  if (OGLWidget->pointType == 2)
    ui->CircleButton->toggle();
  else if (OGLWidget->pointType == 1)
    ui->SquareButton->toggle();
  else
    ui->NoButton->toggle();
  if (OGLWidget->lineType)
    ui->DashedEdgeButton->toggle();
  else
    ui->SolidEdgeButton->toggle();
  if (OGLWidget->perspective)
    ui->PerspectivePrButton->toggle();
  else
    ui->OrthoPrButton->toggle();

  // sparelis: add color sliders processing
}

void MainWindow::screenJPG() {
  time_t now = time(0);
  tm *time = localtime(&now);  // QCoreApplication:: applicationDirPath ()
  QString path = QCoreApplication::applicationFilePath().remove("build/app") +
                 "screenshots/";
  QString name = path + QString::number(time->tm_hour) + "-" +
                 QString::number(time->tm_min) + "-" +
                 QString::number(time->tm_sec) + ".jpg";
  QPixmap pixmap(OGLWidget->size() * 2);
  pixmap.setDevicePixelRatio(2);
  OGLWidget->render(&pixmap);
  pixmap.save(name, "JPG", 100);
}

void MainWindow::screenBMP() {
  time_t now = time(0);
  tm *time = localtime(&now);  // QCoreApplication:: applicationDirPath ()
  QString path = QCoreApplication::applicationFilePath().remove("build/app") +
                 "screenshots/";
  QString name = path + QString::number(time->tm_hour) + "-" +
                 QString::number(time->tm_min) + "-" +
                 QString::number(time->tm_sec) + ".bmp";
  QPixmap pixmap(OGLWidget->size() * 2);
  pixmap.setDevicePixelRatio(2);
  OGLWidget->render(&pixmap);
  pixmap.save(name, "BMP", 100);
}

void MainWindow::pressGIF() {
  startTime = 0, tmpTime = 100;
  timer = new QTimer(this);
  connect(timer, SIGNAL(timeout()), this, SLOT(oneGif()));
  timer->start(100);
}

void MainWindow::oneGif() {
  if (startTime == tmpTime) {
    QPixmap screenGIF(OGLWidget->size());  // *2
    //        screenGIF.setDevicePixelRatio(2);  // improves quality. mult the
    //        size by 2 line above ^
    OGLWidget->render(&screenGIF);
    QImage image;
    image = screenGIF.toImage();
    gif.addFrame(image, 100);
    //        float timePrint = (float)startTime / 1e3;  // GIF time in seconds
    //        with 0.1 second precision (50 updates)
    tmpTime += 100;
  }
  if (startTime == 5e3) {
    time_t now = time(0);
    tm *time = localtime(&now);
    QString path =
        QCoreApplication::applicationFilePath().remove("build/app") + "gifs/";
    QString name = path + QString::number(time->tm_hour) + "-" +
                   QString::number(time->tm_min) + "-" +
                   QString::number(time->tm_sec) + ".gif";

    void **free = (void **)malloc(50 * sizeof(void *));

    gif.save(name, free);

    for (int k = 0; k < 50; k++) {
      std::free(free[k]);
    }
    std::free(free);

    timer->stop();
  }
  startTime += 100;
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
  if (OGLWidget->FindFile.isEmpty()) return;
  parserr((char *)OGLWidget->FindFile.toStdString().c_str(),
          &(OGLWidget->inff));
  OGLWidget->Allocate();
  ui->DisplayEdges->setText(QString::number(OGLWidget->inff.indexF / 6));
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

// sparelis: refactoring + убрать все функции на цвет в отдельный файл
void MainWindow::on_BackColorSlider_valueChanged(int value) {
  if (value / 204 == 0) {
    OGLWidget->backColor.setX(225);
    OGLWidget->backColor.setY(51 + value);
    OGLWidget->backColor.setZ(51);
  } else if (value / 204 == 1) {
    OGLWidget->backColor.setX(255 - (value % 204));
    OGLWidget->backColor.setY(255);
    OGLWidget->backColor.setZ(51);
  } else if (value / 204 == 2) {
    OGLWidget->backColor.setX(51);
    OGLWidget->backColor.setY(255);
    OGLWidget->backColor.setZ(51 + (value % 204));
  } else if (value / 204 == 3) {
    OGLWidget->backColor.setX(51);
    OGLWidget->backColor.setY(255 - (value % 204));
    OGLWidget->backColor.setZ(255);
  } else if (value / 204 == 4) {
    OGLWidget->backColor.setX(51 + (value % 204));
    OGLWidget->backColor.setY(51);
    OGLWidget->backColor.setZ(255);
  } else if (value / 204 == 5) {
    OGLWidget->backColor.setX(225);
    OGLWidget->backColor.setY(51);
    OGLWidget->backColor.setZ(255 - (value % 204));
  }

  OGLWidget->update();
}

void MainWindow::on_EdgeColorSlider_valueChanged(int value) {
  if (value / 204 == 0) {
    OGLWidget->lineColor.setX(225. / 255);
    OGLWidget->lineColor.setY((51 + value) / 255.);
    OGLWidget->lineColor.setZ(51. / 255);
  } else if (value / 204 == 1) {
    OGLWidget->lineColor.setX((255 - (value % 204)) / 255.);
    OGLWidget->lineColor.setY(255. / 255);
    OGLWidget->lineColor.setZ(51. / 255);
  } else if (value / 204 == 2) {
    OGLWidget->lineColor.setX(51. / 255);
    OGLWidget->lineColor.setY(255. / 255);
    OGLWidget->lineColor.setZ((51 + (value % 204)) / 255.);
  } else if (value / 204 == 3) {
    OGLWidget->lineColor.setX(51. / 255);
    OGLWidget->lineColor.setY((255 - (value % 204)) / 255.);
    OGLWidget->lineColor.setZ(255. / 255);
  } else if (value / 204 == 4) {
    OGLWidget->lineColor.setX((51 + (value % 204)) / 255.);
    OGLWidget->lineColor.setY(51. / 255);
    OGLWidget->lineColor.setZ(255. / 255);
  } else if (value / 204 == 5) {
    OGLWidget->lineColor.setX(225. / 255);
    OGLWidget->lineColor.setY(51. / 255);
    OGLWidget->lineColor.setZ((255 - (value % 204)) / 255.);
  }

  OGLWidget->update();
}

void MainWindow::on_VertColorSlider_valueChanged(int value) {
  if (value / 204 == 0) {
    OGLWidget->pointColor.setX(225. / 255);
    OGLWidget->pointColor.setY((51 + value) / 255.);
    OGLWidget->pointColor.setZ(51. / 255);
  } else if (value / 204 == 1) {
    OGLWidget->pointColor.setX((255 - (value % 204)) / 255.);
    OGLWidget->pointColor.setY(255. / 255);
    OGLWidget->pointColor.setZ(51. / 255);
  } else if (value / 204 == 2) {
    OGLWidget->pointColor.setX(51. / 255);
    OGLWidget->pointColor.setY(255. / 255);
    OGLWidget->pointColor.setZ((51 + (value % 204)) / 255.);
  } else if (value / 204 == 3) {
    OGLWidget->pointColor.setX(51. / 255);
    OGLWidget->pointColor.setY((255 - (value % 204)) / 255.);
    OGLWidget->pointColor.setZ(255. / 255);
  } else if (value / 204 == 4) {
    OGLWidget->pointColor.setX((51 + (value % 204)) / 255.);
    OGLWidget->pointColor.setY(51. / 255);
    OGLWidget->pointColor.setZ(255. / 255);
  } else if (value / 204 == 5) {
    OGLWidget->pointColor.setX(225. / 255);
    OGLWidget->pointColor.setY(51. / 255);
    OGLWidget->pointColor.setZ((255 - (value % 204)) / 255.);
  }

  OGLWidget->update();
}

void MainWindow::on_PerspectivePrButton_pressed() {
  OGLWidget->perspective = 1;
  OGLWidget->update();
}

void MainWindow::on_OrthoPrButton_pressed() {
  OGLWidget->perspective = 0;
  OGLWidget->update();
}

void MainWindow::on_SolidEdgeButton_pressed() {
  OGLWidget->lineType = 0;
  OGLWidget->update();
}

void MainWindow::on_DashedEdgeButton_pressed() {
  OGLWidget->lineType = 1;
  OGLWidget->update();
}

void MainWindow::on_EdgeSizeSlider_valueChanged(int value) {
  OGLWidget->lineWidth = value / 10.0;
  OGLWidget->update();
}

void MainWindow::on_CircleButton_pressed() {
  OGLWidget->pointType = 1;
  OGLWidget->update();
}

void MainWindow::on_SquareButton_pressed() {
  OGLWidget->pointType = 2;
  OGLWidget->update();
}

void MainWindow::on_NoButton_pressed() {
  OGLWidget->pointType = 0;
  OGLWidget->update();
}

void MainWindow::on_VertSizeSlider_valueChanged(int value) {
  OGLWidget->pointSize = value / 10.0;
  OGLWidget->update();
}
