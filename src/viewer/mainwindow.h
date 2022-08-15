#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qt3DCore/QEntity>
#include "ogl.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    OGLW *OGLWidget;
    int scaleBuff = 0;
    int moveBuffX = 0;
    int moveBuffY = 0;
    int moveBuffZ = 0;

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

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
