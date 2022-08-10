#ifndef OGLW_H
#define OGLW_H

#include <QtOpenGL>
#include <QtWidgets>
#include <QtOpenGLWidgets>
#include <QOpenGLFunctions>


class OGLW : public QOpenGLWidget {
  Q_OBJECT

 public:
    OGLW(QWidget *parent = nullptr);
    ~OGLW();
  void paintGL();
  void paintFigure();

};

#endif  // OGLW_H
