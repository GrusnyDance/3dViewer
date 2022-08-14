/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label_12;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QSlider *horizontalSlider_3;
    QLabel *label_11;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QSlider *horizontalSlider_2;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QSlider *horizontalSlider_4;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_8;
    QSlider *horizontalSlider_7;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QPushButton *FileButton;
    QGridLayout *gridLayout_3;
    QLineEdit *LineVert;
    QLineEdit *LineEdges;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QLineEdit *FileName;
    QWidget *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1136, 671);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 8, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 12, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(18);
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(12, 0, -1, -1);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        lineEdit_2->setFont(font);

        gridLayout_2->addWidget(lineEdit_2, 2, 2, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 2, 1, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 16777215));
        lineEdit->setFont(font);

        gridLayout_2->addWidget(lineEdit, 1, 2, 1, 1);

        horizontalSlider_3 = new QSlider(centralwidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSlider_3->sizePolicy().hasHeightForWidth());
        horizontalSlider_3->setSizePolicy(sizePolicy2);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_3, 1, 1, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setScaledContents(true);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setBaseSize(QSize(0, 0));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_3->setFont(font);

        gridLayout_2->addWidget(lineEdit_3, 3, 2, 1, 1);

        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        sizePolicy2.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy2);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 3, 1, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 3);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 10);
        gridLayout_2->setColumnStretch(2, 4);
        gridLayout_2->setColumnMinimumWidth(0, 1);
        gridLayout_2->setColumnMinimumWidth(1, 10);
        gridLayout_2->setColumnMinimumWidth(2, 4);

        gridLayout->addLayout(gridLayout_2, 4, 0, 2, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(18);
        gridLayout_7->setVerticalSpacing(20);
        gridLayout_7->setContentsMargins(12, -1, -1, -1);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_5->setFont(font);

        gridLayout_7->addWidget(lineEdit_5, 2, 2, 1, 1);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_4->setFont(font);

        gridLayout_7->addWidget(lineEdit_4, 1, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_15, 3, 0, 1, 1);

        horizontalSlider_4 = new QSlider(centralwidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        sizePolicy2.setHeightForWidth(horizontalSlider_4->sizePolicy().hasHeightForWidth());
        horizontalSlider_4->setSizePolicy(sizePolicy2);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSlider_4, 1, 1, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_13, 1, 0, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_14, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_6->setFont(font);

        gridLayout_7->addWidget(lineEdit_6, 3, 2, 1, 1);

        horizontalSlider_5 = new QSlider(centralwidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        sizePolicy2.setHeightForWidth(horizontalSlider_5->sizePolicy().hasHeightForWidth());
        horizontalSlider_5->setSizePolicy(sizePolicy2);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSlider_5, 2, 1, 1, 1);

        horizontalSlider_6 = new QSlider(centralwidget);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        sizePolicy2.setHeightForWidth(horizontalSlider_6->sizePolicy().hasHeightForWidth());
        horizontalSlider_6->setSizePolicy(sizePolicy2);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSlider_6, 3, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 16777215));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_8, 0, 0, 1, 3);

        gridLayout_7->setColumnStretch(0, 1);
        gridLayout_7->setColumnStretch(1, 10);
        gridLayout_7->setColumnStretch(2, 4);
        gridLayout_7->setColumnMinimumWidth(0, 1);
        gridLayout_7->setColumnMinimumWidth(1, 10);
        gridLayout_7->setColumnMinimumWidth(2, 4);

        gridLayout->addLayout(gridLayout_7, 7, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(18);
        gridLayout_8->setVerticalSpacing(20);
        gridLayout_8->setContentsMargins(12, -1, -1, -1);
        horizontalSlider_7 = new QSlider(centralwidget);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        sizePolicy2.setHeightForWidth(horizontalSlider_7->sizePolicy().hasHeightForWidth());
        horizontalSlider_7->setSizePolicy(sizePolicy2);
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSlider_7, 1, 0, 1, 1);

        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_7->setFont(font);

        gridLayout_8->addWidget(lineEdit_7, 1, 1, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 16777215));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_9, 0, 0, 1, 2);

        gridLayout_8->setColumnStretch(0, 12);
        gridLayout_8->setColumnStretch(1, 4);
        gridLayout_8->setColumnMinimumWidth(0, 12);
        gridLayout_8->setColumnMinimumWidth(1, 4);

        gridLayout->addLayout(gridLayout_8, 9, 0, 1, 1);

        FileButton = new QPushButton(centralwidget);
        FileButton->setObjectName(QString::fromUtf8("FileButton"));
        sizePolicy1.setHeightForWidth(FileButton->sizePolicy().hasHeightForWidth());
        FileButton->setSizePolicy(sizePolicy1);
        FileButton->setMaximumSize(QSize(16777215, 50));
        FileButton->setFont(font1);

        gridLayout->addWidget(FileButton, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(15);
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(12, -1, -1, -1);
        LineVert = new QLineEdit(centralwidget);
        LineVert->setObjectName(QString::fromUtf8("LineVert"));
        LineVert->setFont(font);

        gridLayout_3->addWidget(LineVert, 0, 1, 1, 1);

        LineEdges = new QLineEdit(centralwidget);
        LineEdges->setObjectName(QString::fromUtf8("LineEdges"));
        LineEdges->setFont(font);

        gridLayout_3->addWidget(LineEdges, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(25);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setLineWidth(0);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setMargin(0);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 10);
        gridLayout_3->setRowStretch(1, 4);
        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 10);
        gridLayout_3->setColumnMinimumWidth(0, 1);
        gridLayout_3->setColumnMinimumWidth(1, 10);
        gridLayout_3->setRowMinimumHeight(0, 10);
        gridLayout_3->setRowMinimumHeight(1, 4);

        gridLayout->addLayout(gridLayout_3, 11, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(6);
        gridLayout_4->setVerticalSpacing(15);
        gridLayout_4->setContentsMargins(20, 13, 0, -1);
        FileName = new QLineEdit(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        FileName->setFont(font);

        gridLayout_4->addWidget(FileName, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_4->addWidget(widget, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 1, 1, 12, 2);

        gridLayout->setRowStretch(0, 3);
        gridLayout->setRowStretch(1, 20);
        gridLayout->setRowStretch(2, 10);
        gridLayout->setRowStretch(3, 7);
        gridLayout->setRowStretch(4, 20);
        gridLayout->setRowStretch(6, 10);
        gridLayout->setRowStretch(7, 20);
        gridLayout->setRowStretch(8, 10);
        gridLayout->setRowStretch(10, 20);
        gridLayout->setRowStretch(11, 20);
        gridLayout->setRowStretch(12, 2);
        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
        gridLayout->setColumnMinimumWidth(0, 2);
        gridLayout->setColumnMinimumWidth(1, 10);
        gridLayout->setRowMinimumHeight(0, 3);
        gridLayout->setRowMinimumHeight(1, 20);
        gridLayout->setRowMinimumHeight(2, 10);
        gridLayout->setRowMinimumHeight(3, 7);
        gridLayout->setRowMinimumHeight(4, 20);
        gridLayout->setRowMinimumHeight(6, 10);
        gridLayout->setRowMinimumHeight(7, 20);
        gridLayout->setRowMinimumHeight(8, 10);
        gridLayout->setRowMinimumHeight(10, 20);
        gridLayout->setRowMinimumHeight(11, 20);
        gridLayout->setRowMinimumHeight(12, 2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3dViewer", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        FileButton->setText(QCoreApplication::translate("MainWindow", "Choose file", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
