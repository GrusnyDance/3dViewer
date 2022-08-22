/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_11;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *DisplayRotateZ;
    QLabel *label_15;
    QSlider *RotateY;
    QSlider *RotateX;
    QLineEdit *DisplayRotateX;
    QLineEdit *DisplayRotateY;
    QSlider *RotateZ;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_13;
    QSlider *Scale;
    QLineEdit *DisplayScale;
    QSpacerItem *verticalSpacer_8;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton_5;
    QSlider *Scale_5;
    QLabel *label_20;
    QLabel *label_21;
    QSlider *Scale_6;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *DisplayVertices;
    QLineEdit *DisplayEdges;
    QLabel *label_3;
    QLineEdit *FileName;
    QWidget *widget;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_14;
    QSlider *Scale_4;
    QLabel *label_19;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QPushButton *FileButton;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_12;
    QLabel *label;
    QSlider *MoveX;
    QLineEdit *DisplayMoveX;
    QLabel *label_12;
    QSlider *MoveY;
    QLineEdit *DisplayMoveY;
    QLabel *label_11;
    QSlider *MoveZ;
    QLineEdit *DisplayMoveZ;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButton_4;
    QSlider *Scale_2;
    QLabel *label_16;
    QLabel *label_17;
    QSlider *Scale_3;
    QRadioButton *radioButton_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1488, 1120);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        groupBox_5->setFont(font);
        groupBox_5->setAutoFillBackground(false);
        groupBox_5->setStyleSheet(QString::fromUtf8(""));
        groupBox_5->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(groupBox_5);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(-1, -1, -1, 9);
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_14, 1, 0, 1, 1);

        DisplayRotateZ = new QLineEdit(groupBox_5);
        DisplayRotateZ->setObjectName(QString::fromUtf8("DisplayRotateZ"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplayRotateZ->sizePolicy().hasHeightForWidth());
        DisplayRotateZ->setSizePolicy(sizePolicy);
        DisplayRotateZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateZ->setFont(font);
        DisplayRotateZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateZ, 5, 2, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_15, 5, 0, 1, 1);

        RotateY = new QSlider(groupBox_5);
        RotateY->setObjectName(QString::fromUtf8("RotateY"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(19);
        sizePolicy1.setHeightForWidth(RotateY->sizePolicy().hasHeightForWidth());
        RotateY->setSizePolicy(sizePolicy1);
        RotateY->setMinimumSize(QSize(0, 19));
        RotateY->setMaximumSize(QSize(16777215, 19));
        RotateY->setBaseSize(QSize(0, 19));
        RotateY->setMaximum(720);
        RotateY->setSliderPosition(360);
        RotateY->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateY, 1, 1, 1, 1);

        RotateX = new QSlider(groupBox_5);
        RotateX->setObjectName(QString::fromUtf8("RotateX"));
        sizePolicy1.setHeightForWidth(RotateX->sizePolicy().hasHeightForWidth());
        RotateX->setSizePolicy(sizePolicy1);
        RotateX->setMinimumSize(QSize(0, 19));
        RotateX->setMaximumSize(QSize(16777215, 19));
        RotateX->setBaseSize(QSize(0, 19));
        RotateX->setMaximum(720);
        RotateX->setSliderPosition(360);
        RotateX->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateX, 0, 1, 1, 1);

        DisplayRotateX = new QLineEdit(groupBox_5);
        DisplayRotateX->setObjectName(QString::fromUtf8("DisplayRotateX"));
        sizePolicy.setHeightForWidth(DisplayRotateX->sizePolicy().hasHeightForWidth());
        DisplayRotateX->setSizePolicy(sizePolicy);
        DisplayRotateX->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateX->setFont(font);
        DisplayRotateX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateX, 0, 2, 1, 1);

        DisplayRotateY = new QLineEdit(groupBox_5);
        DisplayRotateY->setObjectName(QString::fromUtf8("DisplayRotateY"));
        sizePolicy.setHeightForWidth(DisplayRotateY->sizePolicy().hasHeightForWidth());
        DisplayRotateY->setSizePolicy(sizePolicy);
        DisplayRotateY->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateY->setFont(font);
        DisplayRotateY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateY, 1, 2, 1, 1);

        RotateZ = new QSlider(groupBox_5);
        RotateZ->setObjectName(QString::fromUtf8("RotateZ"));
        sizePolicy1.setHeightForWidth(RotateZ->sizePolicy().hasHeightForWidth());
        RotateZ->setSizePolicy(sizePolicy1);
        RotateZ->setMinimumSize(QSize(0, 19));
        RotateZ->setMaximumSize(QSize(16777215, 19));
        RotateZ->setBaseSize(QSize(0, 19));
        RotateZ->setMaximum(720);
        RotateZ->setSliderPosition(360);
        RotateZ->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateZ, 5, 1, 1, 1);

        gridLayout_11->setRowStretch(0, 10);
        gridLayout_11->setColumnStretch(0, 2);
        gridLayout_11->setColumnStretch(1, 10);
        gridLayout_11->setColumnStretch(2, 4);
        gridLayout_11->setColumnMinimumWidth(0, 2);
        gridLayout_11->setColumnMinimumWidth(1, 10);
        gridLayout_11->setColumnMinimumWidth(2, 4);

        gridLayout->addWidget(groupBox_5, 5, 0, 1, 1);

        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFont(font);
        groupBox_7->setAutoFillBackground(false);
        groupBox_7->setStyleSheet(QString::fromUtf8(""));
        groupBox_7->setAlignment(Qt::AlignCenter);
        gridLayout_13 = new QGridLayout(groupBox_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 9, -1, 9);
        Scale = new QSlider(groupBox_7);
        Scale->setObjectName(QString::fromUtf8("Scale"));
        sizePolicy1.setHeightForWidth(Scale->sizePolicy().hasHeightForWidth());
        Scale->setSizePolicy(sizePolicy1);
        Scale->setMinimumSize(QSize(0, 19));
        Scale->setMaximumSize(QSize(16777215, 19));
        Scale->setBaseSize(QSize(0, 19));
        Scale->setStyleSheet(QString::fromUtf8("QSlider{\n"
"	height: 19px;\n"
"}"));
        Scale->setMinimum(0);
        Scale->setMaximum(300);
        Scale->setSingleStep(1);
        Scale->setValue(100);
        Scale->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(Scale, 0, 0, 1, 1);

        DisplayScale = new QLineEdit(groupBox_7);
        DisplayScale->setObjectName(QString::fromUtf8("DisplayScale"));
        sizePolicy.setHeightForWidth(DisplayScale->sizePolicy().hasHeightForWidth());
        DisplayScale->setSizePolicy(sizePolicy);
        DisplayScale->setMaximumSize(QSize(16777215, 16777215));
        DisplayScale->setFont(font);
        DisplayScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_13->addWidget(DisplayScale, 0, 1, 1, 1);

        gridLayout_13->setColumnStretch(0, 12);
        gridLayout_13->setColumnStretch(1, 4);

        gridLayout->addWidget(groupBox_7, 7, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 12, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        groupBox_3->setAutoFillBackground(false);
        groupBox_3->setStyleSheet(QString::fromUtf8(""));
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(13);
        radioButton_5->setFont(font2);

        gridLayout_6->addWidget(radioButton_5, 0, 2, 1, 1);

        Scale_5 = new QSlider(groupBox_3);
        Scale_5->setObjectName(QString::fromUtf8("Scale_5"));
        sizePolicy1.setHeightForWidth(Scale_5->sizePolicy().hasHeightForWidth());
        Scale_5->setSizePolicy(sizePolicy1);
        Scale_5->setMinimumSize(QSize(0, 19));
        Scale_5->setMaximumSize(QSize(16777215, 19));
        Scale_5->setBaseSize(QSize(0, 19));
        Scale_5->setMinimum(0);
        Scale_5->setMaximum(300);
        Scale_5->setSingleStep(1);
        Scale_5->setValue(100);
        Scale_5->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(Scale_5, 1, 1, 1, 2);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setStyleStrategy(QFont::PreferAntialias);
        label_20->setFont(font3);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_20, 1, 0, 1, 1);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_21, 2, 0, 1, 1);

        Scale_6 = new QSlider(groupBox_3);
        Scale_6->setObjectName(QString::fromUtf8("Scale_6"));
        sizePolicy1.setHeightForWidth(Scale_6->sizePolicy().hasHeightForWidth());
        Scale_6->setSizePolicy(sizePolicy1);
        Scale_6->setMinimumSize(QSize(0, 19));
        Scale_6->setMaximumSize(QSize(16777215, 19));
        Scale_6->setBaseSize(QSize(0, 19));
        Scale_6->setMinimum(0);
        Scale_6->setMaximum(300);
        Scale_6->setSingleStep(1);
        Scale_6->setValue(100);
        Scale_6->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(Scale_6, 2, 1, 1, 2);

        radioButton_6 = new QRadioButton(groupBox_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setFont(font2);

        gridLayout_6->addWidget(radioButton_6, 0, 0, 1, 1);

        radioButton_7 = new QRadioButton(groupBox_3);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setFont(font2);

        gridLayout_6->addWidget(radioButton_7, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 15, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font2);

        gridLayout_3->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font2);

        gridLayout_3->addWidget(radioButton_2, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 11, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(6);
        gridLayout_4->setVerticalSpacing(15);
        gridLayout_4->setContentsMargins(20, 13, 0, -1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(25);
        font4.setBold(true);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        DisplayVertices = new QLineEdit(centralwidget);
        DisplayVertices->setObjectName(QString::fromUtf8("DisplayVertices"));
        DisplayVertices->setFont(font);
        DisplayVertices->setFocusPolicy(Qt::NoFocus);
        DisplayVertices->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));

        gridLayout_4->addWidget(DisplayVertices, 0, 2, 1, 1);

        DisplayEdges = new QLineEdit(centralwidget);
        DisplayEdges->setObjectName(QString::fromUtf8("DisplayEdges"));
        DisplayEdges->setFont(font);
        DisplayEdges->setFocusPolicy(Qt::NoFocus);
        DisplayEdges->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));

        gridLayout_4->addWidget(DisplayEdges, 0, 4, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font4);
        label_3->setLineWidth(0);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setMargin(0);

        gridLayout_4->addWidget(label_3, 0, 3, 1, 1);

        FileName = new QLineEdit(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        FileName->setFont(font);

        gridLayout_4->addWidget(FileName, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_4->addWidget(widget, 1, 0, 1, 5);

        gridLayout_4->setColumnStretch(0, 20);

        gridLayout->addLayout(gridLayout_4, 1, 1, 16, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setFont(font);
        groupBox_8->setAutoFillBackground(false);
        groupBox_8->setStyleSheet(QString::fromUtf8(""));
        groupBox_8->setAlignment(Qt::AlignCenter);
        gridLayout_14 = new QGridLayout(groupBox_8);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        Scale_4 = new QSlider(groupBox_8);
        Scale_4->setObjectName(QString::fromUtf8("Scale_4"));
        sizePolicy1.setHeightForWidth(Scale_4->sizePolicy().hasHeightForWidth());
        Scale_4->setSizePolicy(sizePolicy1);
        Scale_4->setMinimumSize(QSize(0, 19));
        Scale_4->setMaximumSize(QSize(16777215, 19));
        Scale_4->setBaseSize(QSize(0, 19));
        Scale_4->setMinimum(0);
        Scale_4->setMaximum(300);
        Scale_4->setSingleStep(1);
        Scale_4->setValue(100);
        Scale_4->setOrientation(Qt::Horizontal);

        gridLayout_14->addWidget(Scale_4, 0, 1, 1, 1);

        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_19, 0, 0, 1, 1);

        gridLayout_14->setColumnStretch(0, 2);
        gridLayout_14->setColumnStretch(1, 12);
        gridLayout_14->setColumnMinimumWidth(0, 2);
        gridLayout_14->setColumnMinimumWidth(1, 12);

        gridLayout->addWidget(groupBox_8, 9, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 8, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 16, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 0, 1, 1);

        FileButton = new QPushButton(centralwidget);
        FileButton->setObjectName(QString::fromUtf8("FileButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(FileButton->sizePolicy().hasHeightForWidth());
        FileButton->setSizePolicy(sizePolicy2);
        FileButton->setMaximumSize(QSize(16777215, 50));
        FileButton->setFont(font1);

        gridLayout->addWidget(FileButton, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFont(font);
        groupBox_6->setAutoFillBackground(false);
        groupBox_6->setStyleSheet(QString::fromUtf8(""));
        groupBox_6->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(groupBox_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setBaseSize(QSize(0, 0));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label, 0, 0, 1, 1);

        MoveX = new QSlider(groupBox_6);
        MoveX->setObjectName(QString::fromUtf8("MoveX"));
        sizePolicy1.setHeightForWidth(MoveX->sizePolicy().hasHeightForWidth());
        MoveX->setSizePolicy(sizePolicy1);
        MoveX->setMinimumSize(QSize(0, 19));
        MoveX->setMaximumSize(QSize(16777215, 19));
        MoveX->setBaseSize(QSize(0, 19));
        MoveX->setMinimum(-360);
        MoveX->setMaximum(360);
        MoveX->setOrientation(Qt::Horizontal);
        MoveX->setInvertedControls(true);

        gridLayout_12->addWidget(MoveX, 0, 1, 1, 1);

        DisplayMoveX = new QLineEdit(groupBox_6);
        DisplayMoveX->setObjectName(QString::fromUtf8("DisplayMoveX"));
        sizePolicy.setHeightForWidth(DisplayMoveX->sizePolicy().hasHeightForWidth());
        DisplayMoveX->setSizePolicy(sizePolicy);
        DisplayMoveX->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveX->setFont(font);
        DisplayMoveX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveX, 0, 2, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_12, 1, 0, 1, 1);

        MoveY = new QSlider(groupBox_6);
        MoveY->setObjectName(QString::fromUtf8("MoveY"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(19);
        sizePolicy3.setHeightForWidth(MoveY->sizePolicy().hasHeightForWidth());
        MoveY->setSizePolicy(sizePolicy3);
        MoveY->setMinimumSize(QSize(0, 19));
        MoveY->setMaximumSize(QSize(16777215, 19));
        MoveY->setBaseSize(QSize(0, 19));
        MoveY->setMinimum(-360);
        MoveY->setMaximum(360);
        MoveY->setOrientation(Qt::Horizontal);
        MoveY->setInvertedControls(true);

        gridLayout_12->addWidget(MoveY, 1, 1, 1, 1);

        DisplayMoveY = new QLineEdit(groupBox_6);
        DisplayMoveY->setObjectName(QString::fromUtf8("DisplayMoveY"));
        sizePolicy.setHeightForWidth(DisplayMoveY->sizePolicy().hasHeightForWidth());
        DisplayMoveY->setSizePolicy(sizePolicy);
        DisplayMoveY->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveY->setFont(font);
        DisplayMoveY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveY, 1, 2, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setScaledContents(true);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_11, 5, 0, 1, 1);

        MoveZ = new QSlider(groupBox_6);
        MoveZ->setObjectName(QString::fromUtf8("MoveZ"));
        sizePolicy3.setHeightForWidth(MoveZ->sizePolicy().hasHeightForWidth());
        MoveZ->setSizePolicy(sizePolicy3);
        MoveZ->setMinimumSize(QSize(0, 19));
        MoveZ->setMaximumSize(QSize(16777215, 19));
        MoveZ->setBaseSize(QSize(0, 19));
        MoveZ->setMinimum(-360);
        MoveZ->setMaximum(360);
        MoveZ->setOrientation(Qt::Horizontal);
        MoveZ->setInvertedControls(true);

        gridLayout_12->addWidget(MoveZ, 5, 1, 1, 1);

        DisplayMoveZ = new QLineEdit(groupBox_6);
        DisplayMoveZ->setObjectName(QString::fromUtf8("DisplayMoveZ"));
        sizePolicy.setHeightForWidth(DisplayMoveZ->sizePolicy().hasHeightForWidth());
        DisplayMoveZ->setSizePolicy(sizePolicy);
        DisplayMoveZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveZ->setFont(font);
        DisplayMoveZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveZ, 5, 2, 1, 1);

        gridLayout_12->setColumnStretch(0, 2);
        gridLayout_12->setColumnStretch(1, 10);
        gridLayout_12->setColumnStretch(2, 4);

        gridLayout->addWidget(groupBox_6, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font2);

        gridLayout_5->addWidget(radioButton_4, 0, 2, 1, 1);

        Scale_2 = new QSlider(groupBox_2);
        Scale_2->setObjectName(QString::fromUtf8("Scale_2"));
        sizePolicy1.setHeightForWidth(Scale_2->sizePolicy().hasHeightForWidth());
        Scale_2->setSizePolicy(sizePolicy1);
        Scale_2->setMinimumSize(QSize(0, 19));
        Scale_2->setMaximumSize(QSize(16777215, 19));
        Scale_2->setBaseSize(QSize(0, 19));
        Scale_2->setMinimum(0);
        Scale_2->setMaximum(300);
        Scale_2->setSingleStep(1);
        Scale_2->setValue(100);
        Scale_2->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(Scale_2, 1, 1, 1, 2);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font3);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font3);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_17, 2, 0, 1, 1);

        Scale_3 = new QSlider(groupBox_2);
        Scale_3->setObjectName(QString::fromUtf8("Scale_3"));
        sizePolicy1.setHeightForWidth(Scale_3->sizePolicy().hasHeightForWidth());
        Scale_3->setSizePolicy(sizePolicy1);
        Scale_3->setMinimumSize(QSize(0, 19));
        Scale_3->setMaximumSize(QSize(16777215, 19));
        Scale_3->setBaseSize(QSize(0, 19));
        Scale_3->setMinimum(0);
        Scale_3->setMaximum(300);
        Scale_3->setSingleStep(1);
        Scale_3->setValue(100);
        Scale_3->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(Scale_3, 2, 1, 1, 2);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font2);

        gridLayout_5->addWidget(radioButton_3, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 13, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 14, 0, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 5);
        gridLayout->setRowStretch(2, 2);
        gridLayout->setRowStretch(3, 5);
        gridLayout->setRowStretch(4, 1);
        gridLayout->setRowStretch(5, 5);
        gridLayout->setRowStretch(6, 1);
        gridLayout->setRowStretch(7, 3);
        gridLayout->setRowStretch(8, 1);
        gridLayout->setRowStretch(9, 4);
        gridLayout->setRowStretch(10, 5);
        gridLayout->setRowStretch(11, 4);
        gridLayout->setRowStretch(12, 1);
        gridLayout->setRowStretch(13, 7);
        gridLayout->setRowStretch(14, 1);
        gridLayout->setRowStretch(15, 7);
        gridLayout->setRowStretch(16, 2);
        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
        gridLayout->setRowMinimumHeight(0, 2);
        gridLayout->setRowMinimumHeight(1, 5);
        gridLayout->setRowMinimumHeight(2, 2);
        gridLayout->setRowMinimumHeight(3, 5);
        gridLayout->setRowMinimumHeight(4, 1);
        gridLayout->setRowMinimumHeight(5, 5);
        gridLayout->setRowMinimumHeight(6, 1);
        gridLayout->setRowMinimumHeight(7, 3);
        gridLayout->setRowMinimumHeight(8, 1);
        gridLayout->setRowMinimumHeight(9, 4);
        gridLayout->setRowMinimumHeight(10, 5);
        gridLayout->setRowMinimumHeight(11, 4);
        gridLayout->setRowMinimumHeight(12, 1);
        gridLayout->setRowMinimumHeight(13, 7);
        gridLayout->setRowMinimumHeight(14, 1);
        gridLayout->setRowMinimumHeight(15, 7);
        gridLayout->setRowMinimumHeight(16, 2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3dViewer", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayRotateZ->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        DisplayRotateX->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        DisplayRotateY->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        DisplayScale->setText(QCoreApplication::translate("MainWindow", "1.00", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Projection", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Orthographic", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Background", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        FileButton->setText(QCoreApplication::translate("MainWindow", "Choose file", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Move", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DisplayMoveX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayMoveY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        DisplayMoveZ->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Lines", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
