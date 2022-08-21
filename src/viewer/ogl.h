#ifndef OGLW_H
#define OGLW_H

#include <QOpenGLFunctions>
#include <QtOpenGL>
#include <QtOpenGLWidgets>
#include <QtWidgets>
#include <cmath>

extern "C" {
#include "../parser/3d.h"
}

class OGLW : public QOpenGLWidget, protected QOpenGLFunctions {
  Q_OBJECT

 public:
  OGLW(QWidget *parent = nullptr);
  ~OGLW();
  //  void paintFigure();
  //  void drawFigure();
  int lineType = 1;  // 1 for stipple

  QString FindFile;

  info inff = {0, 0, 0, 0};  // переписать на указатель когда будет готов остальной код
  int rotateBuffX = 0;
  int rotateBuffY = 0;
  int rotateBuffZ = 0;
  QMatrix4x4 moveM;
  QMatrix4x4 scaleM;
  QMatrix4x4 rotateM;
  QMatrix4x4 projM;
  QMatrix4x4 makeRotateM(int a, int b, int c) {
    double cosa = cos(a * M_PI / 180);
    double cosb = cos(b * M_PI / 180);
    double cosg = cos(c * M_PI / 180);
    double sina = sin(a * M_PI / 180);
    double sinb = sin(b * M_PI / 180);
    double sing = sin(c * M_PI / 180);
    return QMatrix4x4(cosb * cosg, sina * sinb * cosg - cosa * sing,
                      cosa * sinb * cosg + sina * sing, 0, cosb * sing,
                      sina * sinb * sing + cosa * cosg,
                      cosa * sinb * sing - sina * cosg, 0, -sinb, sina * cosb,
                      cosa * cosb, 0, 0, 0, 0, 1);
  }
  //  int moveLoc;

 protected:
  void initializeGL() override;
  void paintGL() override;
  void resizeGL(int w, int h) override;

 private:
  //  float z;
  //  QTimer tmr;
  //  float xRot, yRot, zRot;
  QPoint mPos;
  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;
  QOpenGLShaderProgram *prog = nullptr;
  QOpenGLVertexArrayObject vao;
  QOpenGLBuffer vbo;
  QOpenGLBuffer ibo;
  //    info *data;

 public slots:
  //  void changeZ();
  void Allocate();

 signals:
  void mouseMove();
};

#endif  // OGLW_H
