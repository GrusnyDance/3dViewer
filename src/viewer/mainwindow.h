#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qt3DCore/QEntity>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void FilePressed();

private:
    Ui::MainWindow *ui;
    Qt3DCore::QEntity *rootEntity;
};
#endif // MAINWINDOW_H
