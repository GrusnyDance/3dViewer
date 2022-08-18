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
    std::free(inff.array);
    std::free(inff.polygon);
    delete prog;
}

void OGLW::changeZ() {
    z += 0.01;
    update();
}

void OGLW::initializeGL() {
    initializeOpenGLFunctions();
//    glEnable(GL_DEPTH_TEST);
//    vao.create();
//    vao.bind();
    const char *vertexShaderSource =
          "attribute highp vec3 position;\n"
          "attribute vec3 color;\n"
              "varying vec3 vColor;\n"
          "void main()\n"
          "{\n"
          "gl_Position = vec4(position.x, position.y, position.z, 1.0);\n"
              "vColor = color;\n"
          "}\0";
      const char *fragmentShaderSource =
          "varying vec3 vColor;\n"
          "void main()\n"
          "{\n"
          "gl_FragColor = vec4(vColor.r, vColor.g, vColor.b, 1);\n"
          "}\n\0";
      prog = new QOpenGLShaderProgram;
      prog->addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource);
      prog->addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource);
      prog->bindAttributeLocation("position", 0);
      prog->link();
//      vao.release();


//        prog->bind();
//        prog->setAttributeBuffer("position", GL_FLOAT, 0, 3, 3 *sizeof(float));

//      vbo.create();
//      ibo->create();
//      prog->release();




//    char filename[] = "/Users/maykitbo/Desktop/objectives/monkey2.obj";
//    char *filename = FindFile.toStdString();
//    parserr((char*)FindFile.toStdString().c_str(), &inff);
}

void OGLW::Allocate() {

if (vbo.isCreated()) vbo.destroy();
if (ibo->isCreated()) ibo->destroy();

prog->bind();
      vbo.create();
      vbo.bind();
      vbo.setUsagePattern(QOpenGLBuffer::DynamicDraw);

      vbo.allocate(inff.array, inff.indexV * sizeof(float));

      vbo.release();

//      for(int i = 0; i < 1000; ++i) std::printf("%u\t", inff.polygon[i]);

      ibo->create();
      ibo->bind();
      ibo->allocate(inff.polygon, inff.indexF * sizeof(unsigned));
      ibo->release();

    prog->release();

}

void OGLW::paintGL() {
    glClearColor(27.0/255.0, 39.0/255.0, 50.0/255.0,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0,0,-2);

    glRotatef(xRot, 1, 0, 0);
    glRotatef(yRot, 0, 1, 0);

//      prog->bind();

     vbo.bind();
     ibo->bind();
     glEnableVertexAttribArray(0);

      glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat),
                            (GLvoid *)0);



     glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );

      glDrawElements(GL_TRIANGLES, inff.indexF, GL_UNSIGNED_INT, (GLvoid *)0);

      vbo.release();
      ibo->release();

//      prog->release();
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

void OGLW::drawFigure() {
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

//    glBegin(GL_LINE_STRIP);
//    for (uint k = 0; k < inff.indexF; k++) {
//          glBegin(GL_LINE_LOOP);
//          glColor3d(125.0/255.0, 110.0/255.0, 175.0/255);
//          int g = 0;
//          while (inff.polygon[k][g] != 0) {
//              glVertex3f(inff.array[(inff.polygon[k][g] - 1) * 3], inff.array[1 + (inff.polygon[k][g] - 1) * 3], inff.array[2 + (inff.polygon[k][g] - 1) * 3]);
//              g++;
//          }
//          glEnd();
//    }
//    glEnd();
}

