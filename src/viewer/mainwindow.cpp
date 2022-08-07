#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScreen>
#include <QRect>
#include <QFileDialog>
#include <Qt3DCore>
#include <Qt3DExtras>
#include <QMainWindow>
#include <Qt3DRender>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Qt3DCore::QEntity *rootEntity = new Qt3DCore::QEntity();


    Qt3DExtras::Qt3DWindow *view = new Qt3DExtras::Qt3DWindow();
    view->defaultFrameGraph()->setClearColor(QRgb(0x1B2732));
    view->setRootEntity(rootEntity);
    QWidget *container = QWidget::createWindowContainer(view);
    ui->gridLayout_4->addWidget(container,1,0);

    Qt3DRender::QCamera *cameraEntity = view->camera();
    // X+ -> right
    // Y+ -> away
    // Z+ -> up
    cameraEntity->lens()->setPerspectiveProjection(
        45.0f, 16.0f/9.0f, 0.1f, 1000.0f);
    cameraEntity->setPosition(QVector3D(0, -5, 5.0f));
    cameraEntity->setUpVector(QVector3D(0, 0, 1));
    cameraEntity->setViewCenter(QVector3D(0, 0, 0));


    Qt3DExtras::QOrbitCameraController *camController = new
        Qt3DExtras::QOrbitCameraController(rootEntity);
    camController->setCamera(cameraEntity);


    // надо переписать эту часть
    Qt3DCore::QEntity *sceneLoaderEntity = new Qt3DCore::QEntity(rootEntity);
    Qt3DRender::QSceneLoader *sceneLoader = new Qt3DRender::QSceneLoader(sceneLoaderEntity);
    sceneLoader->setObjectName("cow.obj");
    sceneLoaderEntity->addComponent(sceneLoader);
    sceneLoader->setSource(QUrl(QString("file:/home/darika/view/src/viewer/cow.obj")));
    // конец

    ui->FileName->setStyleSheet("background-color: transparent; color: lavender");
    ui->LineVert->setStyleSheet("background-color: transparent;");
    ui->LineEdges->setStyleSheet("background-color: transparent;");

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    resize(width * 0.8, height * 0.9);

    connect(ui->FileButton, SIGNAL(pressed()), this, SLOT(FilePressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::FilePressed() {
    QString FindFile = QFileDialog::getOpenFileName(this,
                       tr("Select a file to open"), QDir::homePath(), tr("Text Files (*.obj)"));
    ui->FileName->setText(FindFile);
}
