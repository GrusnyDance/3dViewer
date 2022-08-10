#include "ogl.h"

OGLW::OGLW(QWidget *parent)
    : QOpenGLWidget(parent)
{
}

OGLW::~OGLW()
{
}

void OGLW::initializeGL() {
    initializeOpenGLFunctions();
}

void OGLW::paintGL() {
    glClearColor(0.5,1,0,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3d(1, 0, 0);
    glVertex2d(0,0);
    glVertex2d(1,0);
    glVertex2d(0,1);
    glEnd();
}

void OGLW::paintFigure() {
//    glClearColor(0.5,1,0,1);
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glViewport(0,0, 10, 10);
//    glBegin(GL_TRIANGLES);
//    glColor3d(1, 0, 0);
//    glVertex2d(0,0);
//    glVertex2d(1,0);
//    glVertex2d(0,1);
//    glEnd();
    qDebug() << "hello";
}
