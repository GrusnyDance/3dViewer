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
    QLineEdit *DisplayMoveY;
    QLabel *label_12;
    QSlider *MoveY;
    QLineEdit *DisplayMoveX;
    QSlider *MoveX;
    QLabel *label_11;
    QLabel *label;
    QLineEdit *DisplayMoveZ;
    QSlider *MoveZ;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_7;
    QLineEdit *DisplayRotateY;
    QLineEdit *DisplayRotateX;
    QLabel *label_15;
    QSlider *RotateX;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *DisplayRotateZ;
    QSlider *RotateY;
    QSlider *RotateZ;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_8;
    QSlider *Scale;
    QLineEdit *DisplayScale;
    QLabel *label_9;
    QPushButton *FileButton;
    QGridLayout *gridLayout_3;
    QLineEdit *DisplayVertices;
    QLineEdit *DisplayEdges;
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
        DisplayMoveY = new QLineEdit(centralwidget);
        DisplayMoveY->setObjectName(QString::fromUtf8("DisplayMoveY"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplayMoveY->sizePolicy().hasHeightForWidth());
        DisplayMoveY->setSizePolicy(sizePolicy);
        DisplayMoveY->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        DisplayMoveY->setFont(font);
        DisplayMoveY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(DisplayMoveY, 2, 2, 1, 1);

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

        MoveY = new QSlider(centralwidget);
        MoveY->setObjectName(QString::fromUtf8("MoveY"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MoveY->sizePolicy().hasHeightForWidth());
        MoveY->setSizePolicy(sizePolicy1);
        MoveY->setMinimum(-360);
        MoveY->setMaximum(360);
        MoveY->setOrientation(Qt::Horizontal);
        MoveY->setInvertedControls(true);

        gridLayout_2->addWidget(MoveY, 2, 1, 1, 1);

        DisplayMoveX = new QLineEdit(centralwidget);
        DisplayMoveX->setObjectName(QString::fromUtf8("DisplayMoveX"));
        sizePolicy.setHeightForWidth(DisplayMoveX->sizePolicy().hasHeightForWidth());
        DisplayMoveX->setSizePolicy(sizePolicy);
        DisplayMoveX->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveX->setFont(font);
        DisplayMoveX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(DisplayMoveX, 1, 2, 1, 1);

        MoveX = new QSlider(centralwidget);
        MoveX->setObjectName(QString::fromUtf8("MoveX"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MoveX->sizePolicy().hasHeightForWidth());
        MoveX->setSizePolicy(sizePolicy2);
        MoveX->setMinimum(-360);
        MoveX->setMaximum(360);
        MoveX->setOrientation(Qt::Horizontal);
        MoveX->setInvertedControls(true);

        gridLayout_2->addWidget(MoveX, 1, 1, 1, 1);

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

        DisplayMoveZ = new QLineEdit(centralwidget);
        DisplayMoveZ->setObjectName(QString::fromUtf8("DisplayMoveZ"));
        sizePolicy.setHeightForWidth(DisplayMoveZ->sizePolicy().hasHeightForWidth());
        DisplayMoveZ->setSizePolicy(sizePolicy);
        DisplayMoveZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveZ->setFont(font);
        DisplayMoveZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(DisplayMoveZ, 3, 2, 1, 1);

        MoveZ = new QSlider(centralwidget);
        MoveZ->setObjectName(QString::fromUtf8("MoveZ"));
        sizePolicy2.setHeightForWidth(MoveZ->sizePolicy().hasHeightForWidth());
        MoveZ->setSizePolicy(sizePolicy2);
        MoveZ->setMinimum(-360);
        MoveZ->setMaximum(360);
        MoveZ->setOrientation(Qt::Horizontal);
        MoveZ->setInvertedControls(true);

        gridLayout_2->addWidget(MoveZ, 3, 1, 1, 1);

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
        DisplayRotateY = new QLineEdit(centralwidget);
        DisplayRotateY->setObjectName(QString::fromUtf8("DisplayRotateY"));
        sizePolicy.setHeightForWidth(DisplayRotateY->sizePolicy().hasHeightForWidth());
        DisplayRotateY->setSizePolicy(sizePolicy);
        DisplayRotateY->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateY->setFont(font);
        DisplayRotateY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(DisplayRotateY, 2, 2, 1, 1);

        DisplayRotateX = new QLineEdit(centralwidget);
        DisplayRotateX->setObjectName(QString::fromUtf8("DisplayRotateX"));
        sizePolicy.setHeightForWidth(DisplayRotateX->sizePolicy().hasHeightForWidth());
        DisplayRotateX->setSizePolicy(sizePolicy);
        DisplayRotateX->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateX->setFont(font);
        DisplayRotateX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(DisplayRotateX, 1, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_15, 3, 0, 1, 1);

        RotateX = new QSlider(centralwidget);
        RotateX->setObjectName(QString::fromUtf8("RotateX"));
        sizePolicy2.setHeightForWidth(RotateX->sizePolicy().hasHeightForWidth());
        RotateX->setSizePolicy(sizePolicy2);
        RotateX->setMaximum(720);
        RotateX->setSliderPosition(360);
        RotateX->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(RotateX, 1, 1, 1, 1);

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

        DisplayRotateZ = new QLineEdit(centralwidget);
        DisplayRotateZ->setObjectName(QString::fromUtf8("DisplayRotateZ"));
        sizePolicy.setHeightForWidth(DisplayRotateZ->sizePolicy().hasHeightForWidth());
        DisplayRotateZ->setSizePolicy(sizePolicy);
        DisplayRotateZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateZ->setFont(font);
        DisplayRotateZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(DisplayRotateZ, 3, 2, 1, 1);

        RotateY = new QSlider(centralwidget);
        RotateY->setObjectName(QString::fromUtf8("RotateY"));
        sizePolicy2.setHeightForWidth(RotateY->sizePolicy().hasHeightForWidth());
        RotateY->setSizePolicy(sizePolicy2);
        RotateY->setMaximum(720);
        RotateY->setSliderPosition(360);
        RotateY->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(RotateY, 2, 1, 1, 1);

        RotateZ = new QSlider(centralwidget);
        RotateZ->setObjectName(QString::fromUtf8("RotateZ"));
        sizePolicy2.setHeightForWidth(RotateZ->sizePolicy().hasHeightForWidth());
        RotateZ->setSizePolicy(sizePolicy2);
        RotateZ->setMaximum(720);
        RotateZ->setSliderPosition(360);
        RotateZ->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(RotateZ, 3, 1, 1, 1);

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
        Scale = new QSlider(centralwidget);
        Scale->setObjectName(QString::fromUtf8("Scale"));
        sizePolicy2.setHeightForWidth(Scale->sizePolicy().hasHeightForWidth());
        Scale->setSizePolicy(sizePolicy2);
        Scale->setMinimum(0);
        Scale->setMaximum(300);
        Scale->setSingleStep(1);
        Scale->setValue(100);
        Scale->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(Scale, 1, 0, 1, 1);

        DisplayScale = new QLineEdit(centralwidget);
        DisplayScale->setObjectName(QString::fromUtf8("DisplayScale"));
        sizePolicy.setHeightForWidth(DisplayScale->sizePolicy().hasHeightForWidth());
        DisplayScale->setSizePolicy(sizePolicy);
        DisplayScale->setMaximumSize(QSize(16777215, 16777215));
        DisplayScale->setFont(font);
        DisplayScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_8->addWidget(DisplayScale, 1, 1, 1, 1);

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
        DisplayVertices = new QLineEdit(centralwidget);
        DisplayVertices->setObjectName(QString::fromUtf8("DisplayVertices"));
        DisplayVertices->setFont(font);
        DisplayVertices->setFocusPolicy(Qt::NoFocus);
        DisplayVertices->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));

        gridLayout_3->addWidget(DisplayVertices, 0, 1, 1, 1);

        DisplayEdges = new QLineEdit(centralwidget);
        DisplayEdges->setObjectName(QString::fromUtf8("DisplayEdges"));
        DisplayEdges->setFont(font);
        DisplayEdges->setFocusPolicy(Qt::NoFocus);
        DisplayEdges->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));

        gridLayout_3->addWidget(DisplayEdges, 1, 1, 1, 1);

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
        DisplayMoveY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayMoveX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DisplayMoveZ->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        DisplayRotateY->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        DisplayRotateX->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayRotateZ->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        DisplayScale->setText(QCoreApplication::translate("MainWindow", "1.00", nullptr));
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
