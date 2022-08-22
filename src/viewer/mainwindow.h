#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qt3DCore/QEntity>

#include "ogl.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  OGLW *OGLWidget;

  //    QString FindFile;

  //    int scaleBuff = 0;
  //    int moveBuffX = 0;
  //    int moveBuffY = 0;
  //    int moveBuffZ = 0;
  //    int rotateBuffX = 0;
  //    int rotateBuffY = 0;
  //    int rotateBuffZ = 0;

 private slots:
  void FilePressed();
  void MovePressed();
  void RotatePressed();
  void ScalePressed();

  void MoveUserInput();
  void RotateUserInput();
  void ScaleUserInput();

  void CallMove(QString str, int val);
  void CallRotate(QString str, int val);

  void updateSliders();

  void on_BackColorSlider_valueChanged(int value);
  void on_EdgeColorSlider_valueChanged(int value);
  void on_VertColorSlider_valueChanged(int value);

  void on_PerspectivePrButton_pressed();
  void on_OrthoPrButton_pressed();
  void on_SolidEdgeButton_pressed();
  void on_DashedEdgeButton_pressed();
  void on_EdgeSizeSlider_valueChanged(int value);
  void on_CircleButton_pressed();
  void on_SquareButton_pressed();
  void on_NoButton_pressed();
  void on_VertSizeSlider_valueChanged(int value);

private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
