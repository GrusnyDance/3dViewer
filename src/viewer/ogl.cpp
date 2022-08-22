#include "ogl.h"

#include <fstream>
#include <cstdio>

OGLW::OGLW(QWidget *parent) : QOpenGLWidget(parent) {
  this->fromFile();
}

OGLW::~OGLW() {
  if (inff.indexV) std::free(inff.array);
  if (inff.indexF) std::free(inff.polygon);

  if (ibo.isCreated()) ibo.destroy();
  if (vbo.isCreated()) vbo.destroy();
  if (vao.isCreated()) vao.destroy();
  delete prog;
  this->toFile();
}

void OGLW::toFile() {
    FILE* file = fopen("config.cfg", "w");
    if (file) {
    fprintf(file, "%d %d %f %f %d %f %f %f %f %f %f",lineType, perspective, lineWidth, pointSize, pointType, lineColor[0], lineColor[1], lineColor[2], pointColor[0], pointColor[1], pointColor[2]);
            fclose(file);
    }
}

void OGLW::fromFile() {
    FILE* file = fopen("config.cfg", "r");
    if (file) {
    int a = fscanf(file, "%d %d %f %f %d %f %f %f %f %f %f", &lineType, &perspective, &lineWidth, &pointSize, &pointType, &lineColor[0], &lineColor[1], &lineColor[2], &pointColor[0], &pointColor[1], &pointColor[2]);
    if (a != 11 || lineType > 1 || lineType < 0 || perspective > 1 || perspective < 0 || lineWidth > 5 || lineWidth < 1 || pointSize > 10 || pointSize < 1 || pointType > 2 || pointType < 0 || lineColor.x() > 1 || lineColor.x() < 0 || lineColor.y() > 1 || lineColor.y() < 0 || lineColor.z() > 1 || lineColor.z() < 0 || pointColor.x() > 1 || pointColor.x() < 0 || pointColor.y() > 1 || pointColor.y() < 0 || pointColor.z() > 1 || pointColor.z() < 0)
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

// void OGLW::changeZ() {
//     z += 0.01;
//     update();
// }

void OGLW::initializeGL() {
  initializeOpenGLFunctions();
  glEnable(GL_DEPTH_TEST);

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
  prog = new QOpenGLShaderProgram;
  prog->addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource);
  prog->addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource);
  prog->bindAttributeLocation("position", 0);
  prog->link();

  moveM.setToIdentity();
  scaleM.setToIdentity();
  rotateM.setToIdentity();

  //      moveLoc = prog->uniformLocation("move");

  //      vao.release();

  //        prog->bind();
  //        prog->setAttributeBuffer("position", GL_FLOAT, 0, 3, 3
  //        *sizeof(float));

  //      vbo.create();
  //      ibo->create();
  //      prog->release();

  //    char filename[] = "/Users/maykitbo/Desktop/objectives/monkey2.obj";
  //    char *filename = FindFile.toStdString();
  //    parserr((char*)FindFile.toStdString().c_str(), &inff);
}

void OGLW::Allocate() {
  //  float vertices[24] = {0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0,
  //                           1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0,
  //                           1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0};
  //    for (unsigned int i = 0; i < inff.indexV; i += 3) {
  //      vertices[i / 3] =
  //          QVector3D(inff.array[i], inff.array[i + 1], inff.array[i + 2]);
  //    }

  //  GLuint indexes[36] = {1, 7, 5, 1, 3, 7, 1, 4, 3, 1, 2, 4, 3, 8, 7, 3, 4,
  //  8,
  //                        5, 7, 8, 5, 8, 6, 1, 5, 6, 1, 6, 2, 2, 6, 8, 2, 8,
  //                        4};

//  const int sizeF = inff.indexF * 2;
//  GLuint indexes[sizeF];
//  for (unsigned i = 0, k = 0; i < inff.indexF; i += 3, k += 6) {
//    indexes[k] = inff.polygon[i] - 1;
//    indexes[k + 1] = inff.polygon[i + 1] - 1;
//    indexes[k + 2] = inff.polygon[i + 1] - 1;
//    indexes[k + 3] = inff.polygon[i + 2] - 1;
//    indexes[k + 4] = inff.polygon[i + 2] - 1;
//    indexes[k + 5] = inff.polygon[i] - 1;
//  }
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
  // printf("aboba");

  //  vbo.allocate(inff.array, inff.indexV * sizeof(float));
  vbo.allocate(inff.array, inff.indexV * sizeof(float));
  //  vbo.allocate(vertices, sizeof(vertices));

  prog->setAttributeBuffer(0, GL_FLOAT, 0, 3, 0);
  prog->enableAttributeArray(0);

  //      for(int i = 0; i < 1000; ++i) std::printf("%u\t", inff.polygon[i]);
  //      for (int i = 0; i < 100; ++i) std::printf("%f\t", inff.array[i]);
  //        for (unsigned i = 0; i < inff.indexV / 3; ++i) std::printf("%f %f
  //        %f\n", vertices[i][0], vertices[i][1], vertices[i][2]);
  //  for (unsigned i = 0; i < inff.indexF; i += 3)
  //    std::printf("%u %u %u\n", inff.polygon[i], inff.polygon[i + 1],
  //                inff.polygon[i + 2]);

  QOpenGLBuffer ibo(QOpenGLBuffer::IndexBuffer);
  ibo.create();
  ibo.bind();
  ibo.setUsagePattern(QOpenGLBuffer::DynamicDraw);
  ibo.allocate(inff.polygon, sizeof(unsigned int) * inff.indexF);

  //  vbo.release();

  vao.release();
  prog->release();

  paintStart = 1;
}

void OGLW::paintGL() {
  glClearColor(backColor.x() / 255.0, backColor.y() / 255.0, backColor.z() / 255.0, 1);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  //      glMatrixMode(GL_MODELVIEW);
  //    glLoadIdentity();
  //    glTranslatef(0,0,-2);

  //    glRotatef(xRot, 1, 0, 0);
  //    glRotatef(yRot, 0, 1, 0);

  //     glEnableVertexAttribArray(0);

  //      glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(QVector3D),
  //                            (GLvoid *)0);

  if (vao.isCreated()) {
    prog->bind();

    perspectiveM.setToIdentity();

    projM = moveM * rotateM * scaleM;
    if (perspective) {
    perspectiveM.frustum(-1, 1, -1, 1, 0.8, 3);
    perspectiveM.translate(0,0, -1.4);
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
//  projM.perspective(45.0f, GLfloat(w) / h, 0.01f, 100.0f);
  //      glViewport(0,0, w, h);
  //        glMatrixMode(GL_PROJECTION);
  //        glLoadIdentity();

//          glFrustum(-1, 1, -1, 1, 1, 20);

  // область видимости объема должна быть адаптивной
}

void OGLW::mousePressEvent(QMouseEvent *mo) { mPos = mo->pos(); }

void OGLW::mouseMoveEvent(QMouseEvent *mo) {
  rotateBuffX = 360 + (mo->pos().y() - mPos.y());
  rotateBuffY = 360 + (mo->pos().x() - mPos.x());
  rotateM = makeRotateM(rotateBuffX, rotateBuffY, rotateBuffZ);
  update();
  emit mouseMove();
}

// void OGLW::drawFigure() {
//     float ver_cub[] = {
//         -a, -a, a,     a, -a, a,     a, a, a,     -a, a, a,
//         a, -a, -a,     -a, -a, -a,   -a, a, -a,   a, a, -a,
//         -a, -a, -a,    -a, -a, a,    -a, a, a,    -a, a, -a,
//         a, -a, a,      a, -a, -a,    a, a, -a,    a, a, a,
//         -a, -a, a,     a, -a, a,     a, -a, -a,   -a, -a, -a,
//         -a, a, a,      a, a, a,      a, a, -a,    -a, a, -a
//     };

//    glVertexPointer(3, GL_FLOAT, 0, &ver_cub);

//    glEnableClientState(GL_VERTEX_ARRAY);
//        glColor3d(174.0/255.0, 109.0/255.0, 217.0/255);
//        glDrawArrays(GL_QUADS, 0, 24);
//    glDisableClientState(GL_VERTEX_ARRAY);

//    glBegin(GL_LINE_STRIP);
//    for (uint k = 0; k < inff.indexF; k++) {
//          glBegin(GL_LINE_LOOP);
//          glColor3d(125.0/255.0, 110.0/255.0, 175.0/255);
//          int g = 0;
//          while (inff.polygon[k][g] != 0) {
//              glVertex3f(inff.array[(inff.polygon[k][g] - 1) * 3],
//              inff.array[1 + (inff.polygon[k][g] - 1) * 3], inff.array[2 +
//              (inff.polygon[k][g] - 1) * 3]); g++;
//          }
//          glEnd();
//    }
//    glEnd();
//}
