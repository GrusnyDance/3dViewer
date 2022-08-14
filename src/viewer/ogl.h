#ifndef OGLW_H
#define OGLW_H

#include <QtOpenGL>
#include <QtWidgets>
#include <QtOpenGLWidgets>
#include <QOpenGLFunctions>

extern "C" {
    #include "../parser/3d.h"
}


class OGLW : public QOpenGLWidget, protected QOpenGLFunctions {
  Q_OBJECT

 public:
    OGLW(QWidget *parent = nullptr);
    ~OGLW();
  void paintFigure();
  void drawCude(float a);

  void renew();
  info inff; // переписать на указатель когда будет готов остальной код

protected:
  void initializeGL() override;
  void paintGL() override;
  void resizeGL(int w, int h) override;

private:
  float z;
  QTimer tmr;
  float xRot, yRot, zRot;
  QPoint mPos;
  void mousePressEvent(QMouseEvent*) override;
  void mouseMoveEvent(QMouseEvent*) override;

public slots:
  void changeZ();

};

#endif  // OGLW_H
