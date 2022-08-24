#include "ogl.h"

#include <cstdio>
#include <fstream>

OGLW::OGLW(QWidget *parent) : QOpenGLWidget(parent) { this->fromFile(); }

OGLW::~OGLW() {
  if (ibo.isCreated()) ibo.destroy();
  if (vbo.isCreated()) vbo.destroy();
  if (vao.isCreated()) vao.destroy();
  delete prog;
  this->toFile();
}

void OGLW::toFile() {
  FILE *file = fopen("config.cfg", "w");
  if (file) {
    fprintf(file, "%d %d %f %f %d %f %f %f %f %f %f", lineType, perspective,
            lineWidth, pointSize, pointType, lineColor[0], lineColor[1],
            lineColor[2], pointColor[0], pointColor[1], pointColor[2]);
    fclose(file);
  }
}

void OGLW::fromFile() {
  FILE *file = fopen("config.cfg", "r");
  if (file) {
    int a = fscanf(file, "%d %d %f %f %d %f %f %f %f %f %f", &lineType,
                   &perspective, &lineWidth, &pointSize, &pointType,
                   &lineColor[0], &lineColor[1], &lineColor[2], &pointColor[0],
                   &pointColor[1], &pointColor[2]);
    if (a != 11 || lineType > 1 || lineType < 0 || perspective > 1 ||
        perspective < 0 || lineWidth > 5 || lineWidth < 1 || pointSize > 10 ||
        pointSize < 1 || pointType > 2 || pointType < 0 || lineColor.x() > 1 ||
        lineColor.x() < 0 || lineColor.y() > 1 || lineColor.y() < 0 ||
        lineColor.z() > 1 || lineColor.z() < 0 || pointColor.x() > 1 ||
        pointColor.x() < 0 || pointColor.y() > 1 || pointColor.y() < 0 ||
        pointColor.z() > 1 || pointColor.z() < 0)
      this->toDefault();
    std::fclose(file);
  } else {
    this->toDefault();
  }
}

void OGLW::toDefault() {
  lineType = 0;
  perspective = 0;
  lineWidth = 1;
  pointSize = 2;
  pointType = 0;
  lineColor = {1, 1, 1};
  pointColor = {1, 1, 1};
}

void OGLW::initializeGL() {
  initializeOpenGLFunctions();
  glEnable(GL_DEPTH_TEST);

  const char *vertexShaderSource =
      "attribute vec3 position;\n"
      "uniform mat4 projection;\n"
      "uniform mat4 persp;\n"
          "uniform vec3 color;\n"
      "void main()\n"
      "{\n"
      "gl_Position = persp * projection * vec4(position.x, position.y, "
      "position.z, "
      "1.0);\n"
      "}\0";
  const char *fragmentShaderSource =
      "uniform vec3 color;\n"
      "void main()\n"
      "{\n"
      "gl_FragColor = vec4(color.x, color.y, color.z, 1);\n"
      "}\n\0";
  prog = new QOpenGLShaderProgram;
  prog->addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource);
  prog->addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource);
  prog->bindAttributeLocation("position", 0);
  prog->link();

  moveM.setToIdentity();
  scaleM.setToIdentity();
  rotateM.setToIdentity();
  normM.setToIdentity();
}

void OGLW::Allocate() {
  if (vbo.isCreated()) vbo.destroy();
  if (ibo.isCreated()) ibo.destroy();
  if (vao.isCreated()) vao.destroy();

  prog->bind();
  vao.create();
  vao.bind();

  QOpenGLBuffer vbo(QOpenGLBuffer::VertexBuffer);
  vbo.create();
  vbo.bind();
  vbo.setUsagePattern(QOpenGLBuffer::DynamicDraw);
  vbo.allocate(inff.array, inff.indexV * sizeof(float));
  std::free(inff.array);

  prog->setAttributeBuffer(0, GL_FLOAT, 0, 3, 0);
  prog->enableAttributeArray(0);

  QOpenGLBuffer ibo(QOpenGLBuffer::IndexBuffer);
  ibo.create();
  ibo.bind();
  ibo.setUsagePattern(QOpenGLBuffer::DynamicDraw);
  ibo.allocate(inff.polygon, sizeof(unsigned int) * inff.indexF);
  std::free(inff.polygon);

  normM.setToIdentity();
  normM *= 1 / inff.maxV;
  normM.setColumn(3, {0, 0, 0, 1});

  vao.release();
  prog->release();
}

void OGLW::paintGL() {
  glClearColor(backColor.x() / 255.0, backColor.y() / 255.0,
               backColor.z() / 255.0, 1);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  if (vao.isCreated()) {
    prog->bind();

    perspectiveM.setToIdentity();
    projM = moveM * rotateM * scaleM * normM;

    if (perspective) {
      perspectiveM.frustum(-1, 1, -1, 1, 0.8, 3);
      perspectiveM.translate(0, 0, -1.4);
    }

    prog->setUniformValue(prog->uniformLocation("projection"), projM);
    prog->setUniformValue(prog->uniformLocation("persp"), perspectiveM);
    prog->setUniformValue(prog->uniformLocation("color"), lineColor);

    if (lineType) {
      glEnable(GL_LINE_STIPPLE);
      glLineStipple(3, 0x00FF);
    }
    glLineWidth(lineWidth);

    vao.bind();

    glDrawElements(GL_LINES, inff.indexF, GL_UNSIGNED_INT, 0);

    if (lineType) glDisable(GL_LINE_STIPPLE);
    prog->setUniformValue(prog->uniformLocation("color"), pointColor);

    glPointSize(pointSize);
    if (pointType == 1) glEnable(GL_POINT_SMOOTH);
    if (pointType) glDrawArrays(GL_POINTS, 0, inff.indexV);
    if (pointType == 1) glDisable(GL_POINT_SMOOTH);

    vao.release();
    prog->release();
  }
}

void OGLW::resizeGL(int w, int h) {
  projM.setToIdentity();
  projM.perspective(45.0f, GLfloat(w) / h, 0.01f, 100.0f);
}

void OGLW::mousePressEvent(QMouseEvent *mo) { mPos = mo->pos(); }

void OGLW::mouseMoveEvent(QMouseEvent *mo) {
  rotateBuffX = 360 + (mo->pos().y() - mPos.y());
  rotateBuffY = 360 + (mo->pos().x() - mPos.x());
  rotateM = makeRotateM(rotateBuffX, rotateBuffY, rotateBuffZ);
  update();
  emit mouseMove();
}
