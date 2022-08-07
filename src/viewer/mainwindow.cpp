#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScreen>
#include <QRect>
#include <QFileDialog>
#include <QDir>
#include <Qt3DCore>
#include <Qt3DExtras>
#include <QMainWindow>
#include <Qt3DRender>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Qt3DExtras::Qt3DWindow *view = new Qt3DExtras::Qt3DWindow();
    view->defaultFrameGraph()->setClearColor(QRgb(0x1B2732));
    QWidget *container = QWidget::createWindowContainer(view);
    ui->gridLayout_4->addWidget(container,1,0);


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
