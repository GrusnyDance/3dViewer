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
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_12;
    QSlider *MoveY;
    QLabel *label_12;
    QLabel *label_11;
    QLineEdit *DisplayMoveX;
    QSlider *MoveX;
    QLabel *label;
    QSlider *MoveZ;
    QLineEdit *DisplayMoveY;
    QLineEdit *DisplayMoveZ;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_11;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *DisplayRotateX;
    QLineEdit *DisplayRotateZ;
    QSlider *RotateY;
    QSlider *RotateZ;
    QLabel *label_15;
    QSlider *RotateX;
    QLineEdit *DisplayRotateY;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_14;
    QSlider *BackColorSlider;
    QLabel *label_19;
    QSpacerItem *verticalSpacer_9;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSlider *Scale_7;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QSlider *VertColorSlider;
    QLabel *label_18;
    QLabel *label_22;
    QRadioButton *SquareButton;
    QRadioButton *NoButton;
    QRadioButton *CircleButton;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_13;
    QLineEdit *DisplayScale;
    QSlider *Scale;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSlider *EdgeSizeSlider;
    QRadioButton *DashedEdgeButton;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_10;
    QRadioButton *SolidEdgeButton;
    QLabel *label_16;
    QLabel *label_17;
    QSlider *EdgeColorSlider;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *PerspectivePrButton;
    QRadioButton *OrthoPrButton;
    QSpacerItem *verticalSpacer;
    QPushButton *FileButton;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_6;
    QLineEdit *FileName;
    QLabel *label_3;
    QLineEdit *DisplayVertices;
    QLabel *label_2;
    QLineEdit *DisplayEdges;
    QGridLayout *gridLayout_4;
    QWidget *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(876, 1367);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        groupBox_6->setFont(font);
        groupBox_6->setAutoFillBackground(false);
        groupBox_6->setStyleSheet(QString::fromUtf8(""));
        groupBox_6->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(groupBox_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(9, -1, 9, -1);
        MoveY = new QSlider(groupBox_6);
        MoveY->setObjectName(QString::fromUtf8("MoveY"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(19);
        sizePolicy.setHeightForWidth(MoveY->sizePolicy().hasHeightForWidth());
        MoveY->setSizePolicy(sizePolicy);
        MoveY->setMinimumSize(QSize(0, 19));
        MoveY->setMaximumSize(QSize(16777215, 19));
        MoveY->setBaseSize(QSize(0, 19));
        MoveY->setMinimum(-360);
        MoveY->setMaximum(360);
        MoveY->setOrientation(Qt::Horizontal);
        MoveY->setInvertedControls(true);

        gridLayout_12->addWidget(MoveY, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_12, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setScaledContents(true);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_11, 5, 0, 1, 1);

        DisplayMoveX = new QLineEdit(groupBox_6);
        DisplayMoveX->setObjectName(QString::fromUtf8("DisplayMoveX"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DisplayMoveX->sizePolicy().hasHeightForWidth());
        DisplayMoveX->setSizePolicy(sizePolicy1);
        DisplayMoveX->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveX->setFont(font);
        DisplayMoveX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveX, 0, 3, 1, 1);

        MoveX = new QSlider(groupBox_6);
        MoveX->setObjectName(QString::fromUtf8("MoveX"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(19);
        sizePolicy2.setHeightForWidth(MoveX->sizePolicy().hasHeightForWidth());
        MoveX->setSizePolicy(sizePolicy2);
        MoveX->setMinimumSize(QSize(0, 19));
        MoveX->setMaximumSize(QSize(16777215, 19));
        MoveX->setBaseSize(QSize(0, 19));
        MoveX->setMinimum(-360);
        MoveX->setMaximum(360);
        MoveX->setOrientation(Qt::Horizontal);
        MoveX->setInvertedControls(true);

        gridLayout_12->addWidget(MoveX, 0, 1, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setBaseSize(QSize(0, 0));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label, 0, 0, 1, 1);

        MoveZ = new QSlider(groupBox_6);
        MoveZ->setObjectName(QString::fromUtf8("MoveZ"));
        sizePolicy.setHeightForWidth(MoveZ->sizePolicy().hasHeightForWidth());
        MoveZ->setSizePolicy(sizePolicy);
        MoveZ->setMinimumSize(QSize(0, 19));
        MoveZ->setMaximumSize(QSize(16777215, 19));
        MoveZ->setBaseSize(QSize(0, 19));
        MoveZ->setMinimum(-360);
        MoveZ->setMaximum(360);
        MoveZ->setOrientation(Qt::Horizontal);
        MoveZ->setInvertedControls(true);

        gridLayout_12->addWidget(MoveZ, 5, 1, 1, 1);

        DisplayMoveY = new QLineEdit(groupBox_6);
        DisplayMoveY->setObjectName(QString::fromUtf8("DisplayMoveY"));
        sizePolicy1.setHeightForWidth(DisplayMoveY->sizePolicy().hasHeightForWidth());
        DisplayMoveY->setSizePolicy(sizePolicy1);
        DisplayMoveY->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveY->setFont(font);
        DisplayMoveY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveY, 1, 3, 1, 1);

        DisplayMoveZ = new QLineEdit(groupBox_6);
        DisplayMoveZ->setObjectName(QString::fromUtf8("DisplayMoveZ"));
        sizePolicy1.setHeightForWidth(DisplayMoveZ->sizePolicy().hasHeightForWidth());
        DisplayMoveZ->setSizePolicy(sizePolicy1);
        DisplayMoveZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveZ->setFont(font);
        DisplayMoveZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveZ, 5, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        gridLayout_12->setColumnStretch(0, 2);
        gridLayout_12->setColumnStretch(1, 10);
        gridLayout_12->setColumnStretch(2, 1);
        gridLayout_12->setColumnStretch(3, 4);
        gridLayout_12->setColumnMinimumWidth(0, 2);
        gridLayout_12->setColumnMinimumWidth(1, 10);
        gridLayout_12->setColumnMinimumWidth(2, 1);
        gridLayout_12->setColumnMinimumWidth(3, 4);

        gridLayout->addWidget(groupBox_6, 3, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 12, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font);
        groupBox_5->setAutoFillBackground(false);
        groupBox_5->setStyleSheet(QString::fromUtf8(""));
        groupBox_5->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(groupBox_5);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(9, -1, 9, 9);
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_14, 1, 0, 1, 1);

        DisplayRotateX = new QLineEdit(groupBox_5);
        DisplayRotateX->setObjectName(QString::fromUtf8("DisplayRotateX"));
        sizePolicy1.setHeightForWidth(DisplayRotateX->sizePolicy().hasHeightForWidth());
        DisplayRotateX->setSizePolicy(sizePolicy1);
        DisplayRotateX->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateX->setFont(font);
        DisplayRotateX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateX, 0, 3, 1, 1);

        DisplayRotateZ = new QLineEdit(groupBox_5);
        DisplayRotateZ->setObjectName(QString::fromUtf8("DisplayRotateZ"));
        sizePolicy1.setHeightForWidth(DisplayRotateZ->sizePolicy().hasHeightForWidth());
        DisplayRotateZ->setSizePolicy(sizePolicy1);
        DisplayRotateZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateZ->setFont(font);
        DisplayRotateZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateZ, 5, 3, 1, 1);

        RotateY = new QSlider(groupBox_5);
        RotateY->setObjectName(QString::fromUtf8("RotateY"));
        sizePolicy2.setHeightForWidth(RotateY->sizePolicy().hasHeightForWidth());
        RotateY->setSizePolicy(sizePolicy2);
        RotateY->setMinimumSize(QSize(0, 19));
        RotateY->setMaximumSize(QSize(16777215, 19));
        RotateY->setBaseSize(QSize(0, 19));
        RotateY->setMaximum(720);
        RotateY->setSliderPosition(360);
        RotateY->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateY, 1, 1, 1, 1);

        RotateZ = new QSlider(groupBox_5);
        RotateZ->setObjectName(QString::fromUtf8("RotateZ"));
        sizePolicy2.setHeightForWidth(RotateZ->sizePolicy().hasHeightForWidth());
        RotateZ->setSizePolicy(sizePolicy2);
        RotateZ->setMinimumSize(QSize(0, 19));
        RotateZ->setMaximumSize(QSize(16777215, 19));
        RotateZ->setBaseSize(QSize(0, 19));
        RotateZ->setMaximum(720);
        RotateZ->setSliderPosition(360);
        RotateZ->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateZ, 5, 1, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_15, 5, 0, 1, 1);

        RotateX = new QSlider(groupBox_5);
        RotateX->setObjectName(QString::fromUtf8("RotateX"));
        sizePolicy2.setHeightForWidth(RotateX->sizePolicy().hasHeightForWidth());
        RotateX->setSizePolicy(sizePolicy2);
        RotateX->setMinimumSize(QSize(0, 19));
        RotateX->setMaximumSize(QSize(16777215, 19));
        RotateX->setBaseSize(QSize(0, 19));
        RotateX->setMaximum(720);
        RotateX->setSliderPosition(360);
        RotateX->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateX, 0, 1, 1, 1);

        DisplayRotateY = new QLineEdit(groupBox_5);
        DisplayRotateY->setObjectName(QString::fromUtf8("DisplayRotateY"));
        sizePolicy1.setHeightForWidth(DisplayRotateY->sizePolicy().hasHeightForWidth());
        DisplayRotateY->setSizePolicy(sizePolicy1);
        DisplayRotateY->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateY->setFont(font);
        DisplayRotateY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateY, 1, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        gridLayout_11->setColumnStretch(0, 2);
        gridLayout_11->setColumnStretch(1, 10);
        gridLayout_11->setColumnStretch(2, 1);
        gridLayout_11->setColumnStretch(3, 4);
        gridLayout_11->setColumnMinimumWidth(0, 2);
        gridLayout_11->setColumnMinimumWidth(1, 10);
        gridLayout_11->setColumnMinimumWidth(2, 1);
        gridLayout_11->setColumnMinimumWidth(3, 4);

        gridLayout->addWidget(groupBox_5, 5, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 1);

        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setFont(font);
        groupBox_8->setAutoFillBackground(false);
        groupBox_8->setStyleSheet(QString::fromUtf8(""));
        groupBox_8->setAlignment(Qt::AlignCenter);
        gridLayout_14 = new QGridLayout(groupBox_8);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(-1, -1, 13, -1);
        BackColorSlider = new QSlider(groupBox_8);
        BackColorSlider->setObjectName(QString::fromUtf8("BackColorSlider"));
        sizePolicy2.setHeightForWidth(BackColorSlider->sizePolicy().hasHeightForWidth());
        BackColorSlider->setSizePolicy(sizePolicy2);
        BackColorSlider->setMinimumSize(QSize(0, 19));
        BackColorSlider->setMaximumSize(QSize(16777215, 19));
        BackColorSlider->setBaseSize(QSize(0, 19));
        BackColorSlider->setMinimum(1);
        BackColorSlider->setMaximum(1224);
        BackColorSlider->setSingleStep(1);
        BackColorSlider->setValue(1);
        BackColorSlider->setSliderPosition(1);
        BackColorSlider->setOrientation(Qt::Horizontal);

        gridLayout_14->addWidget(BackColorSlider, 0, 1, 1, 1);

        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_19->setFont(font2);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_19, 0, 0, 1, 1);

        gridLayout_14->setColumnStretch(0, 2);
        gridLayout_14->setColumnStretch(1, 12);
        gridLayout_14->setColumnMinimumWidth(0, 2);
        gridLayout_14->setColumnMinimumWidth(1, 12);

        gridLayout->addWidget(groupBox_8, 9, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 14, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        groupBox_4->setAutoFillBackground(false);
        groupBox_4->setStyleSheet(QString::fromUtf8(""));
        groupBox_4->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(11, -1, 13, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 1, 5, 1, 1);

        Scale_7 = new QSlider(groupBox_4);
        Scale_7->setObjectName(QString::fromUtf8("Scale_7"));
        sizePolicy2.setHeightForWidth(Scale_7->sizePolicy().hasHeightForWidth());
        Scale_7->setSizePolicy(sizePolicy2);
        Scale_7->setMinimumSize(QSize(0, 19));
        Scale_7->setMaximumSize(QSize(16777215, 19));
        Scale_7->setBaseSize(QSize(0, 19));
        Scale_7->setMinimum(0);
        Scale_7->setMaximum(300);
        Scale_7->setSingleStep(1);
        Scale_7->setValue(100);
        Scale_7->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(Scale_7, 5, 2, 1, 4);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_13, 4, 2, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_14, 2, 4, 1, 1);

        VertColorSlider = new QSlider(groupBox_4);
        VertColorSlider->setObjectName(QString::fromUtf8("VertColorSlider"));
        sizePolicy2.setHeightForWidth(VertColorSlider->sizePolicy().hasHeightForWidth());
        VertColorSlider->setSizePolicy(sizePolicy2);
        VertColorSlider->setMinimumSize(QSize(0, 19));
        VertColorSlider->setMaximumSize(QSize(16777215, 19));
        VertColorSlider->setBaseSize(QSize(0, 19));
        VertColorSlider->setMinimum(1);
        VertColorSlider->setMaximum(1224);
        VertColorSlider->setSingleStep(1);
        VertColorSlider->setValue(1);
        VertColorSlider->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(VertColorSlider, 3, 2, 1, 4);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font2);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_18, 3, 0, 1, 2);

        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font2);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_22, 5, 0, 1, 2);

        SquareButton = new QRadioButton(groupBox_4);
        SquareButton->setObjectName(QString::fromUtf8("SquareButton"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(13);
        SquareButton->setFont(font3);
        SquareButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout_7->addWidget(SquareButton, 1, 3, 1, 1);

        NoButton = new QRadioButton(groupBox_4);
        NoButton->setObjectName(QString::fromUtf8("NoButton"));
        NoButton->setFont(font3);
        NoButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout_7->addWidget(NoButton, 1, 4, 1, 1);

        CircleButton = new QRadioButton(groupBox_4);
        CircleButton->setObjectName(QString::fromUtf8("CircleButton"));
        CircleButton->setFont(font3);
        CircleButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout_7->addWidget(CircleButton, 1, 1, 1, 2);

        gridLayout_7->setRowStretch(0, 3);
        gridLayout_7->setRowStretch(1, 7);
        gridLayout_7->setRowStretch(2, 6);
        gridLayout_7->setRowStretch(3, 8);
        gridLayout_7->setRowStretch(4, 2);
        gridLayout_7->setRowStretch(5, 7);
        gridLayout_7->setColumnStretch(0, 2);
        gridLayout_7->setColumnStretch(1, 2);
        gridLayout_7->setColumnStretch(2, 4);
        gridLayout_7->setColumnStretch(3, 2);
        gridLayout_7->setColumnStretch(4, 4);
        gridLayout_7->setColumnStretch(5, 2);
        gridLayout_7->setColumnMinimumWidth(0, 2);
        gridLayout_7->setColumnMinimumWidth(1, 2);
        gridLayout_7->setColumnMinimumWidth(2, 4);
        gridLayout_7->setColumnMinimumWidth(3, 2);
        gridLayout_7->setColumnMinimumWidth(4, 4);
        gridLayout_7->setColumnMinimumWidth(5, 2);
        gridLayout_7->setRowMinimumHeight(0, 3);
        gridLayout_7->setRowMinimumHeight(1, 7);
        gridLayout_7->setRowMinimumHeight(2, 6);
        gridLayout_7->setRowMinimumHeight(3, 8);
        gridLayout_7->setRowMinimumHeight(4, 2);
        gridLayout_7->setRowMinimumHeight(5, 7);

        gridLayout->addWidget(groupBox_4, 15, 0, 1, 1);

        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFont(font);
        groupBox_7->setAutoFillBackground(false);
        groupBox_7->setStyleSheet(QString::fromUtf8(""));
        groupBox_7->setAlignment(Qt::AlignCenter);
        gridLayout_13 = new QGridLayout(groupBox_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 9, 9, 9);
        DisplayScale = new QLineEdit(groupBox_7);
        DisplayScale->setObjectName(QString::fromUtf8("DisplayScale"));
        sizePolicy1.setHeightForWidth(DisplayScale->sizePolicy().hasHeightForWidth());
        DisplayScale->setSizePolicy(sizePolicy1);
        DisplayScale->setMaximumSize(QSize(16777215, 16777215));
        DisplayScale->setFont(font);
        DisplayScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_13->addWidget(DisplayScale, 0, 2, 1, 1);

        Scale = new QSlider(groupBox_7);
        Scale->setObjectName(QString::fromUtf8("Scale"));
        sizePolicy2.setHeightForWidth(Scale->sizePolicy().hasHeightForWidth());
        Scale->setSizePolicy(sizePolicy2);
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

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        gridLayout_13->setColumnStretch(0, 16);
        gridLayout_13->setColumnStretch(1, 1);
        gridLayout_13->setColumnStretch(2, 5);
        gridLayout_13->setColumnMinimumWidth(0, 16);
        gridLayout_13->setColumnMinimumWidth(1, 1);
        gridLayout_13->setColumnMinimumWidth(2, 5);

        gridLayout->addWidget(groupBox_7, 7, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(11, -1, 13, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        EdgeSizeSlider = new QSlider(groupBox_2);
        EdgeSizeSlider->setObjectName(QString::fromUtf8("EdgeSizeSlider"));
        sizePolicy2.setHeightForWidth(EdgeSizeSlider->sizePolicy().hasHeightForWidth());
        EdgeSizeSlider->setSizePolicy(sizePolicy2);
        EdgeSizeSlider->setMinimumSize(QSize(0, 19));
        EdgeSizeSlider->setMaximumSize(QSize(16777215, 19));
        EdgeSizeSlider->setBaseSize(QSize(0, 19));
        EdgeSizeSlider->setMinimum(10);
        EdgeSizeSlider->setMaximum(50);
        EdgeSizeSlider->setSingleStep(1);
        EdgeSizeSlider->setValue(10);
        EdgeSizeSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(EdgeSizeSlider, 5, 2, 1, 4);

        DashedEdgeButton = new QRadioButton(groupBox_2);
        DashedEdgeButton->setObjectName(QString::fromUtf8("DashedEdgeButton"));
        DashedEdgeButton->setFont(font3);

        gridLayout_5->addWidget(DashedEdgeButton, 1, 4, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_12, 4, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_10, 2, 4, 1, 1);

        SolidEdgeButton = new QRadioButton(groupBox_2);
        SolidEdgeButton->setObjectName(QString::fromUtf8("SolidEdgeButton"));
        SolidEdgeButton->setFont(font3);

        gridLayout_5->addWidget(SolidEdgeButton, 1, 1, 1, 2);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_16, 3, 0, 1, 2);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font2);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_17, 5, 0, 1, 2);

        EdgeColorSlider = new QSlider(groupBox_2);
        EdgeColorSlider->setObjectName(QString::fromUtf8("EdgeColorSlider"));
        sizePolicy2.setHeightForWidth(EdgeColorSlider->sizePolicy().hasHeightForWidth());
        EdgeColorSlider->setSizePolicy(sizePolicy2);
        EdgeColorSlider->setMinimumSize(QSize(0, 19));
        EdgeColorSlider->setMaximumSize(QSize(16777215, 19));
        EdgeColorSlider->setBaseSize(QSize(0, 19));
        EdgeColorSlider->setMinimum(1);
        EdgeColorSlider->setMaximum(1224);
        EdgeColorSlider->setSingleStep(1);
        EdgeColorSlider->setValue(1);
        EdgeColorSlider->setSliderPosition(1);
        EdgeColorSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(EdgeColorSlider, 3, 2, 1, 4);

        gridLayout_5->setRowStretch(0, 3);
        gridLayout_5->setRowStretch(1, 7);
        gridLayout_5->setRowStretch(2, 6);
        gridLayout_5->setRowStretch(3, 8);
        gridLayout_5->setRowStretch(4, 2);
        gridLayout_5->setRowStretch(5, 7);
        gridLayout_5->setColumnStretch(0, 2);
        gridLayout_5->setColumnStretch(1, 1);
        gridLayout_5->setColumnStretch(2, 4);
        gridLayout_5->setColumnStretch(3, 2);
        gridLayout_5->setColumnStretch(4, 4);
        gridLayout_5->setColumnStretch(5, 2);
        gridLayout_5->setColumnMinimumWidth(0, 2);
        gridLayout_5->setColumnMinimumWidth(1, 1);
        gridLayout_5->setColumnMinimumWidth(2, 4);
        gridLayout_5->setColumnMinimumWidth(3, 2);
        gridLayout_5->setColumnMinimumWidth(4, 4);
        gridLayout_5->setColumnMinimumWidth(5, 2);
        gridLayout_5->setRowMinimumHeight(0, 3);
        gridLayout_5->setRowMinimumHeight(1, 7);
        gridLayout_5->setRowMinimumHeight(2, 6);
        gridLayout_5->setRowMinimumHeight(3, 8);
        gridLayout_5->setRowMinimumHeight(4, 2);
        gridLayout_5->setRowMinimumHeight(5, 7);

        gridLayout->addWidget(groupBox_2, 13, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        PerspectivePrButton = new QRadioButton(groupBox);
        PerspectivePrButton->setObjectName(QString::fromUtf8("PerspectivePrButton"));
        PerspectivePrButton->setFont(font3);

        gridLayout_3->addWidget(PerspectivePrButton, 0, 0, 1, 1);

        OrthoPrButton = new QRadioButton(groupBox);
        OrthoPrButton->setObjectName(QString::fromUtf8("OrthoPrButton"));
        OrthoPrButton->setFont(font3);

        gridLayout_3->addWidget(OrthoPrButton, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 11, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        FileButton = new QPushButton(centralwidget);
        FileButton->setObjectName(QString::fromUtf8("FileButton"));
        sizePolicy3.setHeightForWidth(FileButton->sizePolicy().hasHeightForWidth());
        FileButton->setSizePolicy(sizePolicy3);
        FileButton->setMaximumSize(QSize(16777215, 50));
        FileButton->setFont(font1);

        gridLayout->addWidget(FileButton, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 8, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 16, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(20, -1, -1, -1);
        FileName = new QLineEdit(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        FileName->setFont(font);
        FileName->setReadOnly(true);

        gridLayout_6->addWidget(FileName, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(25);
        font4.setBold(true);
        label_3->setFont(font4);
        label_3->setLineWidth(0);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setMargin(0);

        gridLayout_6->addWidget(label_3, 0, 3, 1, 1);

        DisplayVertices = new QLineEdit(centralwidget);
        DisplayVertices->setObjectName(QString::fromUtf8("DisplayVertices"));
        DisplayVertices->setFont(font);
        DisplayVertices->setFocusPolicy(Qt::NoFocus);
        DisplayVertices->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));
        DisplayVertices->setReadOnly(true);

        gridLayout_6->addWidget(DisplayVertices, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_2, 0, 1, 1, 1);

        DisplayEdges = new QLineEdit(centralwidget);
        DisplayEdges->setObjectName(QString::fromUtf8("DisplayEdges"));
        DisplayEdges->setFont(font);
        DisplayEdges->setFocusPolicy(Qt::NoFocus);
        DisplayEdges->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));
        DisplayEdges->setReadOnly(true);

        gridLayout_6->addWidget(DisplayEdges, 0, 4, 1, 1);

        gridLayout_6->setColumnStretch(0, 25);
        gridLayout_6->setColumnStretch(1, 3);
        gridLayout_6->setColumnStretch(2, 4);
        gridLayout_6->setColumnStretch(3, 3);
        gridLayout_6->setColumnStretch(4, 5);
        gridLayout_6->setColumnMinimumWidth(0, 25);
        gridLayout_6->setColumnMinimumWidth(1, 3);
        gridLayout_6->setColumnMinimumWidth(2, 4);
        gridLayout_6->setColumnMinimumWidth(3, 3);
        gridLayout_6->setColumnMinimumWidth(4, 5);

        gridLayout->addLayout(gridLayout_6, 1, 1, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(15);
        gridLayout_4->setContentsMargins(20, 13, -1, -1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_4->addWidget(widget, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 1, 15, 2);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 6);
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
        gridLayout->setColumnMinimumWidth(0, 2);
        gridLayout->setColumnMinimumWidth(1, 10);
        gridLayout->setRowMinimumHeight(0, 2);
        gridLayout->setRowMinimumHeight(1, 6);
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
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Move", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        DisplayMoveX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DisplayMoveY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        DisplayMoveZ->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayRotateX->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        DisplayRotateZ->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        DisplayRotateY->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Background", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        SquareButton->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        NoButton->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        CircleButton->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        DisplayScale->setText(QCoreApplication::translate("MainWindow", "1.00", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        DashedEdgeButton->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        SolidEdgeButton->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Projection", nullptr));
        PerspectivePrButton->setText(QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        OrthoPrButton->setText(QCoreApplication::translate("MainWindow", "Orthographic", nullptr));
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
