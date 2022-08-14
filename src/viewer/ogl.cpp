#include "ogl.h"

OGLW::OGLW(QWidget *parent)
    : QOpenGLWidget(parent)
{
    z = 0;
    connect(&tmr, SIGNAL(timeout()), this, SLOT(changeZ()));
    tmr.start(100);
}

OGLW::~OGLW()
{
}

void OGLW::changeZ() {
    z += 0.01;
    update();
}

void OGLW::initializeGL() {
    initializeOpenGLFunctions();
    glEnable(GL_DEPTH_TEST);
}

void OGLW::paintGL() {
    glClearColor(27.0/255.0, 39.0/255.0, 50.0/255.0,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0,0,-2);

    glRotatef(xRot, 1, 0, 0);
    glRotatef(yRot, 0, 1, 0);

    drawCude(0.5);
}

void OGLW::resizeGL(int w, int h) {
    glViewport(0,0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glFrustum(-1, 1, -1, 1, 1, 20); // область видимости объема должна быть адаптивной
}

void OGLW::mousePressEvent(QMouseEvent *mo) {
    mPos = mo->pos();

}

void OGLW::mouseMoveEvent(QMouseEvent *mo) {
    xRot = 1/M_PI * (mo->pos().y() - mPos.y());
    yRot = 1/M_PI * (mo->pos().x() - mPos.x());
    update();
}

void OGLW::drawCude(float a) {
//    float ver_cub[] = {
//        -a, -a, a,     a, -a, a,     a, a, a,     -a, a, a,
//        a, -a, -a,     -a, -a, -a,   -a, a, -a,   a, a, -a,
//        -a, -a, -a,    -a, -a, a,    -a, a, a,    -a, a, -a,
//        a, -a, a,      a, -a, -a,    a, a, -a,    a, a, a,
//        -a, -a, a,     a, -a, a,     a, -a, -a,   -a, -a, -a,
//        -a, a, a,      a, a, a,      a, a, -a,    -a, a, -a
//    };

//    glVertexPointer(3, GL_FLOAT, 0, &ver_cub);

//    glEnableClientState(GL_VERTEX_ARRAY);
//        glColor3d(174.0/255.0, 109.0/255.0, 217.0/255);
//        glDrawArrays(GL_QUADS, 0, 24);
//    glDisableClientState(GL_VERTEX_ARRAY);
    char filename[] = "/home/darika/view/src/parser/objectives/monkey2.obj";
    parserr(filename, &inff);
//    glBegin(GL_LINE_STRIP);
    for (uint k = 0; k < inff.indexF; k++) {
          glBegin(GL_LINE_LOOP);
          glColor3d(125.0/255.0, 110.0/255.0, 175.0/255);
          int g = 0;
          while (inff.polygon[k][g] != 0) {
              glVertex3f(inff.array[inff.polygon[k][g] - 1][0], inff.array[inff.polygon[k][g] - 1][1], inff.array[inff.polygon[k][g] - 1][2]);
              g++;
          }
          glEnd();
    }
//    glEnd();
}


void OGLW::renew() {
    qDebug() << "Hello";
    for (uint k = 0; k < inff.indexF; k++) {
          glBegin(GL_LINE_LOOP);
          glColor3d(125.0/255.0, 110.0/255.0, 175.0/255);
          int g = 0;
          while (inff.polygon[k][g] != 0) {
              glVertex3f(inff.array[inff.polygon[k][g] - 1][0], inff.array[inff.polygon[k][g] - 1][1], inff.array[inff.polygon[k][g] - 1][2]);
              g++;
          }
          glEnd();
    }
}
