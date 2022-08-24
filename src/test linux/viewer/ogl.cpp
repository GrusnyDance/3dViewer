#include "ogl.h"

#include <fstream>
#include <cstdio>


const char *vertexShaderSource =
    "attribute vec3 position;\n"
    "uniform mat4 projection;\n"
    "uniform mat4 persp;\n"
    "void main()\n"
    "{\n"
    "gl_Position = persp * projection * vec4(position.x, position.y, position.z, "
    "1.0);\n"
    "}\0";
const char *fragmentShaderSource =
    "uniform vec3 color;\n"
    "void main()\n"
    "{\n"
    "gl_FragColor = vec4(color.x, color.y, color.z, 1);\n"
    "}\n\0";

OGLW::OGLW(QWidget *parent) : QOpenGLWidget(parent) {
    inff = new info;
}

OGLW::~OGLW() {
  if (inff->indexV) std::free(inff->array);
  if (inff->indexF) std::free(inff->polygon);

  if (ibo.isCreated()) {
      ibo.destroy();
  }
  if (vbo.isCreated()) {
      vbo.destroy();
  }
  if (vao.isCreated()) {
      vao.destroy();
  }
//  delete prog;
  if (inff) delete inff;
}


void OGLW::toDefault() {
     perspective = 1;
     pointSize = 2;
     lineColor = {1, 1, 1};
     pointColor = {1, 1, 1};
}

void OGLW::initializeGL() {
  initializeOpenGLFunctions();
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glEnable(GL_DEPTH_TEST);

  prog.addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource);
  prog.addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource);
  prog.bindAttributeLocation("position", 0);
//  prog.bind();
  prog.link();
//  prog.bind();

  moveM.setToIdentity();
  scaleM.setToIdentity();
  rotateM.setToIdentity();
}

void OGLW::Allocate() {
    qDebug() << "line 94";
    if (vbo.isCreated()) {
        vbo.destroy();
    }
  if (ibo.isCreated()) {
      ibo.destroy();
  }
  if (vao.isCreated()) {
      vao.destroy();
  }

//  prog.bind();
  vao.create();
  qDebug() << "vao created";
  vao.bind();

  vbo.create();

  vbo.setUsagePattern(QOpenGLBuffer::DynamicDraw);
  vbo.bind();

  vbo.allocate(inff->array, inff->indexV * sizeof(float));
  vbo.release();


//  prog.setAttributeBuffer(0, GL_FLOAT, 0, 3, 0);
//  prog.enableAttributeArray(0);

  ibo.create();
  ibo.setUsagePattern(QOpenGLBuffer::DynamicDraw);
  ibo.bind();
  ibo.allocate(inff->polygon, sizeof(unsigned int) * inff->indexF);
  ibo.release();


  vao.release();
  prog.release();

  paintStart = 1;
  update();
}

void OGLW::paintGL() {
    qDebug() << "i paint";
  glClearColor(backColor.x() / 255.0, backColor.y() / 255.0, backColor.z() / 255.0, 1);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  qDebug() << "line 143";

  if (vao.isCreated()) {
    vao.bind();
    vbo.bind();
    ibo.bind();
    prog.bind();

    perspectiveM.setToIdentity();

    projM = moveM * rotateM * scaleM;
    perspectiveM.frustum(-1, 1, -1, 1, 0.8, 3);
    perspectiveM.translate(0,0, -1.4);

    prog.setUniformValue(prog.uniformLocation("projection"), projM);
    prog.setUniformValue(prog.uniformLocation("persp"), perspectiveM);
    prog.setUniformValue(prog.uniformLocation("color"), lineColor);


    int vertexLocation = prog.attributeLocation("position");
      prog.enableAttributeArray(vertexLocation);
      prog.setAttributeBuffer(vertexLocation, GL_FLOAT, 0, 3, 10);

    qDebug() << "line 130";
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    glDrawElements(GL_LINES, inff->indexF, GL_UNSIGNED_INT, 0);
    qDebug() << "line 132";

    prog.setUniformValue(prog.uniformLocation("color"), pointColor);

    glPointSize(pointSize);

    vao.release();
    prog.release();
  }
}

void OGLW::resizeGL(int w, int h) {
  projM.setToIdentity();
  glViewport(0,0, w, h);
}

void OGLW::mousePressEvent(QMouseEvent *mo) { mPos = mo->pos(); }

void OGLW::mouseMoveEvent(QMouseEvent *mo) {
  rotateBuffX = 360 + (mo->pos().y() - mPos.y());
  rotateBuffY = 360 + (mo->pos().x() - mPos.x());
  rotateM = makeRotateM(rotateBuffX, rotateBuffY, rotateBuffZ);
  update();
  emit mouseMove();
}


