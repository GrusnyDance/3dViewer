#ifndef OGLW_H
#define OGLW_H

#include <QtOpenGL>
#include <QtWidgets>
#include <QtOpenGLWidgets>
#include <QOpenGLFunctions>


class OGLW : public QOpenGLWidget, protected QOpenGLFunctions {
  Q_OBJECT

 public:
    OGLW(QWidget *parent = nullptr);
    ~OGLW();
  void paintFigure();

protected:
  void initializeGL() override;
  void paintGL() override;

};

#endif  // OGLW_H
