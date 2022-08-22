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

  void on_Scale_4_valueChanged(int value);

private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
