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
    QGridLayout *gridLayout_8;
    QLabel *label_9;
    QSlider *Scale;
    QLineEdit *DisplayScale;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *DisplayVertices;
    QLineEdit *DisplayEdges;
    QLabel *label_3;
    QLineEdit *FileName;
    QWidget *widget;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *FileButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButton_4;
    QSlider *Scale_2;
    QLabel *label_16;
    QLabel *label_17;
    QSlider *Scale_3;
    QRadioButton *radioButton_3;
    QGridLayout *gridLayout_9;
    QLabel *label_19;
    QSlider *Scale_4;
    QLabel *label_18;
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
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton_5;
    QSlider *Scale_5;
    QLabel *label_20;
    QLabel *label_21;
    QSlider *Scale_6;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
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
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1488, 1120);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(18);
        gridLayout_8->setVerticalSpacing(20);
        gridLayout_8->setContentsMargins(12, -1, -1, -1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_9, 0, 0, 1, 2);

        Scale = new QSlider(centralwidget);
        Scale->setObjectName(QString::fromUtf8("Scale"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Scale->sizePolicy().hasHeightForWidth());
        Scale->setSizePolicy(sizePolicy);
        Scale->setMinimum(0);
        Scale->setMaximum(300);
        Scale->setSingleStep(1);
        Scale->setValue(100);
        Scale->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(Scale, 1, 0, 1, 1);

        DisplayScale = new QLineEdit(centralwidget);
        DisplayScale->setObjectName(QString::fromUtf8("DisplayScale"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DisplayScale->sizePolicy().hasHeightForWidth());
        DisplayScale->setSizePolicy(sizePolicy1);
        DisplayScale->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        DisplayScale->setFont(font1);
        DisplayScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_8->addWidget(DisplayScale, 1, 1, 1, 1);

        gridLayout_8->setColumnStretch(0, 12);
        gridLayout_8->setColumnStretch(1, 4);

        gridLayout->addLayout(gridLayout_8, 7, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 13, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(6);
        gridLayout_4->setVerticalSpacing(15);
        gridLayout_4->setContentsMargins(20, 13, 0, -1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(25);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        DisplayVertices = new QLineEdit(centralwidget);
        DisplayVertices->setObjectName(QString::fromUtf8("DisplayVertices"));
        DisplayVertices->setFont(font1);
        DisplayVertices->setFocusPolicy(Qt::NoFocus);
        DisplayVertices->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));

        gridLayout_4->addWidget(DisplayVertices, 0, 2, 1, 1);

        DisplayEdges = new QLineEdit(centralwidget);
        DisplayEdges->setObjectName(QString::fromUtf8("DisplayEdges"));
        DisplayEdges->setFont(font1);
        DisplayEdges->setFocusPolicy(Qt::NoFocus);
        DisplayEdges->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));

        gridLayout_4->addWidget(DisplayEdges, 0, 4, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setLineWidth(0);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setMargin(0);

        gridLayout_4->addWidget(label_3, 0, 3, 1, 1);

        FileName = new QLineEdit(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        FileName->setFont(font1);

        gridLayout_4->addWidget(FileName, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_4->addWidget(widget, 1, 0, 1, 5);

        gridLayout_4->setColumnStretch(0, 20);

        gridLayout->addLayout(gridLayout_4, 1, 1, 13, 2);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 0, 1, 1);

        FileButton = new QPushButton(centralwidget);
        FileButton->setObjectName(QString::fromUtf8("FileButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(FileButton->sizePolicy().hasHeightForWidth());
        FileButton->setSizePolicy(sizePolicy2);
        FileButton->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setStyleStrategy(QFont::PreferAntialias);
        FileButton->setFont(font3);

        gridLayout->addWidget(FileButton, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font1);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_5->addWidget(radioButton_4, 0, 2, 1, 1);

        Scale_2 = new QSlider(groupBox_2);
        Scale_2->setObjectName(QString::fromUtf8("Scale_2"));
        sizePolicy.setHeightForWidth(Scale_2->sizePolicy().hasHeightForWidth());
        Scale_2->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(Scale_3->sizePolicy().hasHeightForWidth());
        Scale_3->setSizePolicy(sizePolicy);
        Scale_3->setMinimum(0);
        Scale_3->setMaximum(300);
        Scale_3->setSingleStep(1);
        Scale_3->setValue(100);
        Scale_3->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(Scale_3, 2, 1, 1, 2);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_5->addWidget(radioButton_3, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 11, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(18);
        gridLayout_9->setVerticalSpacing(20);
        gridLayout_9->setContentsMargins(12, -1, -1, -1);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_19, 1, 0, 1, 1);

        Scale_4 = new QSlider(centralwidget);
        Scale_4->setObjectName(QString::fromUtf8("Scale_4"));
        sizePolicy.setHeightForWidth(Scale_4->sizePolicy().hasHeightForWidth());
        Scale_4->setSizePolicy(sizePolicy);
        Scale_4->setMinimum(0);
        Scale_4->setMaximum(300);
        Scale_4->setSingleStep(1);
        Scale_4->setValue(100);
        Scale_4->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(Scale_4, 1, 1, 1, 2);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMaximumSize(QSize(16777215, 16777215));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_18, 0, 0, 1, 3);

        gridLayout_9->setColumnStretch(0, 2);
        gridLayout_9->setColumnStretch(1, 10);
        gridLayout_9->setColumnMinimumWidth(0, 2);
        gridLayout_9->setColumnMinimumWidth(1, 10);

        gridLayout->addLayout(gridLayout_9, 8, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(18);
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(12, 0, -1, -1);
        DisplayMoveY = new QLineEdit(centralwidget);
        DisplayMoveY->setObjectName(QString::fromUtf8("DisplayMoveY"));
        sizePolicy1.setHeightForWidth(DisplayMoveY->sizePolicy().hasHeightForWidth());
        DisplayMoveY->setSizePolicy(sizePolicy1);
        DisplayMoveY->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveY->setFont(font1);
        DisplayMoveY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(DisplayMoveY, 2, 2, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        MoveY = new QSlider(centralwidget);
        MoveY->setObjectName(QString::fromUtf8("MoveY"));
        sizePolicy2.setHeightForWidth(MoveY->sizePolicy().hasHeightForWidth());
        MoveY->setSizePolicy(sizePolicy2);
        MoveY->setMinimum(-360);
        MoveY->setMaximum(360);
        MoveY->setOrientation(Qt::Horizontal);
        MoveY->setInvertedControls(true);

        gridLayout_2->addWidget(MoveY, 2, 1, 1, 1);

        DisplayMoveX = new QLineEdit(centralwidget);
        DisplayMoveX->setObjectName(QString::fromUtf8("DisplayMoveX"));
        sizePolicy1.setHeightForWidth(DisplayMoveX->sizePolicy().hasHeightForWidth());
        DisplayMoveX->setSizePolicy(sizePolicy1);
        DisplayMoveX->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveX->setFont(font1);
        DisplayMoveX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(DisplayMoveX, 1, 2, 1, 1);

        MoveX = new QSlider(centralwidget);
        MoveX->setObjectName(QString::fromUtf8("MoveX"));
        sizePolicy.setHeightForWidth(MoveX->sizePolicy().hasHeightForWidth());
        MoveX->setSizePolicy(sizePolicy);
        MoveX->setMinimum(-360);
        MoveX->setMaximum(360);
        MoveX->setOrientation(Qt::Horizontal);
        MoveX->setInvertedControls(true);

        gridLayout_2->addWidget(MoveX, 1, 1, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);
        label_11->setScaledContents(true);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setBaseSize(QSize(0, 0));
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        DisplayMoveZ = new QLineEdit(centralwidget);
        DisplayMoveZ->setObjectName(QString::fromUtf8("DisplayMoveZ"));
        sizePolicy1.setHeightForWidth(DisplayMoveZ->sizePolicy().hasHeightForWidth());
        DisplayMoveZ->setSizePolicy(sizePolicy1);
        DisplayMoveZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveZ->setFont(font1);
        DisplayMoveZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(DisplayMoveZ, 3, 2, 1, 1);

        MoveZ = new QSlider(centralwidget);
        MoveZ->setObjectName(QString::fromUtf8("MoveZ"));
        sizePolicy.setHeightForWidth(MoveZ->sizePolicy().hasHeightForWidth());
        MoveZ->setSizePolicy(sizePolicy);
        MoveZ->setMinimum(-360);
        MoveZ->setMaximum(360);
        MoveZ->setOrientation(Qt::Horizontal);
        MoveZ->setInvertedControls(true);

        gridLayout_2->addWidget(MoveZ, 3, 1, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 16777215));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 3);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 10);
        gridLayout_2->setColumnStretch(2, 4);
        gridLayout_2->setColumnMinimumWidth(0, 1);
        gridLayout_2->setColumnMinimumWidth(1, 10);
        gridLayout_2->setColumnMinimumWidth(2, 4);

        gridLayout->addLayout(gridLayout_2, 4, 0, 2, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font1);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_3->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_3->addWidget(radioButton_2, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 10, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font1);
        groupBox_3->setAutoFillBackground(false);
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout_6->addWidget(radioButton_5, 0, 2, 1, 1);

        Scale_5 = new QSlider(groupBox_3);
        Scale_5->setObjectName(QString::fromUtf8("Scale_5"));
        sizePolicy.setHeightForWidth(Scale_5->sizePolicy().hasHeightForWidth());
        Scale_5->setSizePolicy(sizePolicy);
        Scale_5->setMinimum(0);
        Scale_5->setMaximum(300);
        Scale_5->setSingleStep(1);
        Scale_5->setValue(100);
        Scale_5->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(Scale_5, 1, 1, 1, 2);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
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
        sizePolicy.setHeightForWidth(Scale_6->sizePolicy().hasHeightForWidth());
        Scale_6->setSizePolicy(sizePolicy);
        Scale_6->setMinimum(0);
        Scale_6->setMaximum(300);
        Scale_6->setSingleStep(1);
        Scale_6->setValue(100);
        Scale_6->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(Scale_6, 2, 1, 1, 2);

        radioButton_6 = new QRadioButton(groupBox_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        gridLayout_6->addWidget(radioButton_6, 0, 0, 1, 1);

        radioButton_7 = new QRadioButton(groupBox_3);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        gridLayout_6->addWidget(radioButton_7, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 12, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(18);
        gridLayout_7->setVerticalSpacing(20);
        gridLayout_7->setContentsMargins(12, -1, -1, -1);
        DisplayRotateY = new QLineEdit(centralwidget);
        DisplayRotateY->setObjectName(QString::fromUtf8("DisplayRotateY"));
        sizePolicy1.setHeightForWidth(DisplayRotateY->sizePolicy().hasHeightForWidth());
        DisplayRotateY->setSizePolicy(sizePolicy1);
        DisplayRotateY->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateY->setFont(font1);
        DisplayRotateY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(DisplayRotateY, 2, 2, 1, 1);

        DisplayRotateX = new QLineEdit(centralwidget);
        DisplayRotateX->setObjectName(QString::fromUtf8("DisplayRotateX"));
        sizePolicy1.setHeightForWidth(DisplayRotateX->sizePolicy().hasHeightForWidth());
        DisplayRotateX->setSizePolicy(sizePolicy1);
        DisplayRotateX->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateX->setFont(font1);
        DisplayRotateX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(DisplayRotateX, 1, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_15, 3, 0, 1, 1);

        RotateX = new QSlider(centralwidget);
        RotateX->setObjectName(QString::fromUtf8("RotateX"));
        sizePolicy.setHeightForWidth(RotateX->sizePolicy().hasHeightForWidth());
        RotateX->setSizePolicy(sizePolicy);
        RotateX->setMaximum(720);
        RotateX->setSliderPosition(360);
        RotateX->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(RotateX, 1, 1, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_13, 1, 0, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_14, 2, 0, 1, 1);

        DisplayRotateZ = new QLineEdit(centralwidget);
        DisplayRotateZ->setObjectName(QString::fromUtf8("DisplayRotateZ"));
        sizePolicy1.setHeightForWidth(DisplayRotateZ->sizePolicy().hasHeightForWidth());
        DisplayRotateZ->setSizePolicy(sizePolicy1);
        DisplayRotateZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateZ->setFont(font1);
        DisplayRotateZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(DisplayRotateZ, 3, 2, 1, 1);

        RotateY = new QSlider(centralwidget);
        RotateY->setObjectName(QString::fromUtf8("RotateY"));
        sizePolicy.setHeightForWidth(RotateY->sizePolicy().hasHeightForWidth());
        RotateY->setSizePolicy(sizePolicy);
        RotateY->setMaximum(720);
        RotateY->setSliderPosition(360);
        RotateY->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(RotateY, 2, 1, 1, 1);

        RotateZ = new QSlider(centralwidget);
        RotateZ->setObjectName(QString::fromUtf8("RotateZ"));
        sizePolicy.setHeightForWidth(RotateZ->sizePolicy().hasHeightForWidth());
        RotateZ->setSizePolicy(sizePolicy);
        RotateZ->setMaximum(720);
        RotateZ->setSliderPosition(360);
        RotateZ->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(RotateZ, 3, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 16777215));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_8, 0, 0, 1, 3);

        gridLayout_7->setColumnStretch(0, 1);
        gridLayout_7->setColumnStretch(1, 10);
        gridLayout_7->setColumnStretch(2, 4);
        gridLayout_7->setColumnMinimumWidth(0, 1);
        gridLayout_7->setColumnMinimumWidth(1, 10);
        gridLayout_7->setColumnMinimumWidth(2, 4);

        gridLayout->addLayout(gridLayout_7, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
        gridLayout->setColumnMinimumWidth(0, 2);
        gridLayout->setColumnMinimumWidth(1, 10);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3dViewer", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        DisplayScale->setText(QCoreApplication::translate("MainWindow", "1.00", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        FileButton->setText(QCoreApplication::translate("MainWindow", "Choose file", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Lines", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Background", nullptr));
        DisplayMoveY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayMoveX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DisplayMoveZ->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Projection", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Orthographic", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        DisplayRotateY->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        DisplayRotateX->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayRotateZ->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
