#include "ogl.h"

#include <iostream>

OGLW::OGLW(QWidget *parent) : QOpenGLWidget(parent) {
  //    z = 0;
  //    connect(&tmr, SIGNAL(timeout()), this, SLOT(changeZ()));
  //    tmr.start(1);
}

OGLW::~OGLW() {
  if (inff.indexV) std::free(inff.array);
  if (inff.indexF) std::free(inff.polygon);

  if (ibo.isCreated()) ibo.destroy();
  if (vbo.isCreated()) vbo.destroy();
  delete prog;
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
      "attribute vec3 color;\n"
      "varying vec3 vColor;\n"
      "uniform mat4 projection;\n"
      "void main()\n"
      "{\n"
      "gl_Position = projection * vec4(position.x, position.y, position.z, "
      "1.0);\n"
      "vColor = color;\n"
      "}\0";
  const char *fragmentShaderSource =
      "varying vec3 vColor;\n"
      "void main()\n"
      "{\n"
      "gl_FragColor = vec4(1, 1, 1, 1);\n"
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
  GLuint indexes[inff.indexF * 2];
  for (unsigned i = 0, k = 0; i < inff.indexF; i += 3, k += 6) {
    indexes[k] = inff.polygon[i] - 1;
    indexes[k + 1] = inff.polygon[i + 1] - 1;
    indexes[k + 2] = inff.polygon[i + 1] - 1;
    indexes[k + 3] = inff.polygon[i + 2] - 1;
    indexes[k + 4] = inff.polygon[i + 2] - 1;
    indexes[k + 5] = inff.polygon[i] - 1;
  }

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
  ibo.allocate(indexes, sizeof(indexes));

  //  vbo.release();

  vao.release();
  prog->release();
}

void OGLW::paintGL() {
  glClearColor(27.0 / 255.0, 39.0 / 255.0, 50.0 / 255.0, 1);
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

    projM = moveM * rotateM * scaleM;
    prog->setUniformValue(prog->uniformLocation("projection"), projM);

    //          glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    //          if (lineType) {
    //              glLineStipple(1, 0x3f07)
    //          }

    vao.bind();

    glDrawElements(GL_LINES, inff.indexF * 2, GL_UNSIGNED_INT, 0);

    vao.release();
    prog->release();
  }
}

void OGLW::resizeGL(int w, int h) {
  projM.setToIdentity();
  projM.perspective(45.0f, GLfloat(w) / h, 0.01f, 100.0f);
  //      glViewport(0,0, w, h);
  //        glMatrixMode(GL_PROJECTION);
  //        glLoadIdentity();

  //        glFrustum(-1, 1, -1, 1, 1, 20);

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
