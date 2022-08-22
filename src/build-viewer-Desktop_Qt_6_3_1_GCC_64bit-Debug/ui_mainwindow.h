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
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSlider *Scale_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_10;
    QSlider *Scale_2;
    QRadioButton *radioButton_3;
    QLabel *label_16;
    QLabel *label_17;
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
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_13;
    QLineEdit *DisplayScale;
    QSlider *Scale;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_9;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_14;
    QSlider *Scale_4;
    QLabel *label_19;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_8;
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
    QPushButton *FileButton;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *DisplayVertices;
    QLineEdit *DisplayEdges;
    QLabel *label_3;
    QLineEdit *FileName;
    QWidget *widget;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSlider *Scale_7;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QSlider *Scale_8;
    QLabel *label_18;
    QLabel *label_22;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1651, 1215);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(13);
        radioButton->setFont(font1);

        gridLayout_3->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        gridLayout_3->addWidget(radioButton_2, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 11, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 16, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(11, -1, 9, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        Scale_3 = new QSlider(groupBox_2);
        Scale_3->setObjectName(QString::fromUtf8("Scale_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(19);
        sizePolicy.setHeightForWidth(Scale_3->sizePolicy().hasHeightForWidth());
        Scale_3->setSizePolicy(sizePolicy);
        Scale_3->setMinimumSize(QSize(0, 19));
        Scale_3->setMaximumSize(QSize(16777215, 19));
        Scale_3->setBaseSize(QSize(0, 19));
        Scale_3->setMinimum(0);
        Scale_3->setMaximum(300);
        Scale_3->setSingleStep(1);
        Scale_3->setValue(100);
        Scale_3->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(Scale_3, 5, 2, 1, 4);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font1);

        gridLayout_5->addWidget(radioButton_4, 1, 4, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_12, 4, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_10, 2, 4, 1, 1);

        Scale_2 = new QSlider(groupBox_2);
        Scale_2->setObjectName(QString::fromUtf8("Scale_2"));
        sizePolicy.setHeightForWidth(Scale_2->sizePolicy().hasHeightForWidth());
        Scale_2->setSizePolicy(sizePolicy);
        Scale_2->setMinimumSize(QSize(0, 19));
        Scale_2->setMaximumSize(QSize(16777215, 19));
        Scale_2->setBaseSize(QSize(0, 19));
        Scale_2->setMinimum(0);
        Scale_2->setMaximum(300);
        Scale_2->setSingleStep(1);
        Scale_2->setValue(100);
        Scale_2->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(Scale_2, 3, 2, 1, 4);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font1);

        gridLayout_5->addWidget(radioButton_3, 1, 1, 1, 2);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_16->setFont(font2);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_16, 3, 0, 1, 2);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font2);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_17, 5, 0, 1, 2);

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

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFont(font);
        groupBox_6->setAutoFillBackground(false);
        groupBox_6->setStyleSheet(QString::fromUtf8(""));
        groupBox_6->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(groupBox_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(9, -1, 9, -1);
        MoveY = new QSlider(groupBox_6);
        MoveY->setObjectName(QString::fromUtf8("MoveY"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(19);
        sizePolicy1.setHeightForWidth(MoveY->sizePolicy().hasHeightForWidth());
        MoveY->setSizePolicy(sizePolicy1);
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
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setStyleStrategy(QFont::PreferAntialias);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_12, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);
        label_11->setScaledContents(true);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_11, 5, 0, 1, 1);

        DisplayMoveX = new QLineEdit(groupBox_6);
        DisplayMoveX->setObjectName(QString::fromUtf8("DisplayMoveX"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DisplayMoveX->sizePolicy().hasHeightForWidth());
        DisplayMoveX->setSizePolicy(sizePolicy2);
        DisplayMoveX->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveX->setFont(font);
        DisplayMoveX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveX, 0, 3, 1, 1);

        MoveX = new QSlider(groupBox_6);
        MoveX->setObjectName(QString::fromUtf8("MoveX"));
        sizePolicy.setHeightForWidth(MoveX->sizePolicy().hasHeightForWidth());
        MoveX->setSizePolicy(sizePolicy);
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
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label, 0, 0, 1, 1);

        MoveZ = new QSlider(groupBox_6);
        MoveZ->setObjectName(QString::fromUtf8("MoveZ"));
        sizePolicy1.setHeightForWidth(MoveZ->sizePolicy().hasHeightForWidth());
        MoveZ->setSizePolicy(sizePolicy1);
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
        sizePolicy2.setHeightForWidth(DisplayMoveY->sizePolicy().hasHeightForWidth());
        DisplayMoveY->setSizePolicy(sizePolicy2);
        DisplayMoveY->setMaximumSize(QSize(16777215, 16777215));
        DisplayMoveY->setFont(font);
        DisplayMoveY->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(DisplayMoveY, 1, 3, 1, 1);

        DisplayMoveZ = new QLineEdit(groupBox_6);
        DisplayMoveZ->setObjectName(QString::fromUtf8("DisplayMoveZ"));
        sizePolicy2.setHeightForWidth(DisplayMoveZ->sizePolicy().hasHeightForWidth());
        DisplayMoveZ->setSizePolicy(sizePolicy2);
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

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 8, 0, 1, 1);

        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFont(font);
        groupBox_7->setAutoFillBackground(false);
        groupBox_7->setStyleSheet(QString::fromUtf8(""));
        groupBox_7->setAlignment(Qt::AlignCenter);
        gridLayout_13 = new QGridLayout(groupBox_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 9, -1, 9);
        DisplayScale = new QLineEdit(groupBox_7);
        DisplayScale->setObjectName(QString::fromUtf8("DisplayScale"));
        sizePolicy2.setHeightForWidth(DisplayScale->sizePolicy().hasHeightForWidth());
        DisplayScale->setSizePolicy(sizePolicy2);
        DisplayScale->setMaximumSize(QSize(16777215, 16777215));
        DisplayScale->setFont(font);
        DisplayScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_13->addWidget(DisplayScale, 0, 2, 1, 1);

        Scale = new QSlider(groupBox_7);
        Scale->setObjectName(QString::fromUtf8("Scale"));
        sizePolicy.setHeightForWidth(Scale->sizePolicy().hasHeightForWidth());
        Scale->setSizePolicy(sizePolicy);
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

        gridLayout_13->setColumnStretch(0, 13);
        gridLayout_13->setColumnStretch(1, 1);
        gridLayout_13->setColumnStretch(2, 4);
        gridLayout_13->setColumnMinimumWidth(0, 13);
        gridLayout_13->setColumnMinimumWidth(1, 1);
        gridLayout_13->setColumnMinimumWidth(2, 4);

        gridLayout->addWidget(groupBox_7, 7, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 14, 0, 1, 1);

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
        sizePolicy.setHeightForWidth(Scale_4->sizePolicy().hasHeightForWidth());
        Scale_4->setSizePolicy(sizePolicy);
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
        label_19->setFont(font2);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_19, 0, 0, 1, 1);

        gridLayout_14->setColumnStretch(0, 2);
        gridLayout_14->setColumnStretch(1, 12);
        gridLayout_14->setColumnMinimumWidth(0, 2);
        gridLayout_14->setColumnMinimumWidth(1, 12);

        gridLayout->addWidget(groupBox_8, 9, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 12, 0, 1, 1);

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
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_14, 1, 0, 1, 1);

        DisplayRotateX = new QLineEdit(groupBox_5);
        DisplayRotateX->setObjectName(QString::fromUtf8("DisplayRotateX"));
        sizePolicy2.setHeightForWidth(DisplayRotateX->sizePolicy().hasHeightForWidth());
        DisplayRotateX->setSizePolicy(sizePolicy2);
        DisplayRotateX->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateX->setFont(font);
        DisplayRotateX->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateX, 0, 3, 1, 1);

        DisplayRotateZ = new QLineEdit(groupBox_5);
        DisplayRotateZ->setObjectName(QString::fromUtf8("DisplayRotateZ"));
        sizePolicy2.setHeightForWidth(DisplayRotateZ->sizePolicy().hasHeightForWidth());
        DisplayRotateZ->setSizePolicy(sizePolicy2);
        DisplayRotateZ->setMaximumSize(QSize(16777215, 16777215));
        DisplayRotateZ->setFont(font);
        DisplayRotateZ->setFocusPolicy(Qt::StrongFocus);

        gridLayout_11->addWidget(DisplayRotateZ, 5, 3, 1, 1);

        RotateY = new QSlider(groupBox_5);
        RotateY->setObjectName(QString::fromUtf8("RotateY"));
        sizePolicy.setHeightForWidth(RotateY->sizePolicy().hasHeightForWidth());
        RotateY->setSizePolicy(sizePolicy);
        RotateY->setMinimumSize(QSize(0, 19));
        RotateY->setMaximumSize(QSize(16777215, 19));
        RotateY->setBaseSize(QSize(0, 19));
        RotateY->setMaximum(720);
        RotateY->setSliderPosition(360);
        RotateY->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateY, 1, 1, 1, 1);

        RotateZ = new QSlider(groupBox_5);
        RotateZ->setObjectName(QString::fromUtf8("RotateZ"));
        sizePolicy.setHeightForWidth(RotateZ->sizePolicy().hasHeightForWidth());
        RotateZ->setSizePolicy(sizePolicy);
        RotateZ->setMinimumSize(QSize(0, 19));
        RotateZ->setMaximumSize(QSize(16777215, 19));
        RotateZ->setBaseSize(QSize(0, 19));
        RotateZ->setMaximum(720);
        RotateZ->setSliderPosition(360);
        RotateZ->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateZ, 5, 1, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_15, 5, 0, 1, 1);

        RotateX = new QSlider(groupBox_5);
        RotateX->setObjectName(QString::fromUtf8("RotateX"));
        sizePolicy.setHeightForWidth(RotateX->sizePolicy().hasHeightForWidth());
        RotateX->setSizePolicy(sizePolicy);
        RotateX->setMinimumSize(QSize(0, 19));
        RotateX->setMaximumSize(QSize(16777215, 19));
        RotateX->setBaseSize(QSize(0, 19));
        RotateX->setMaximum(720);
        RotateX->setSliderPosition(360);
        RotateX->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(RotateX, 0, 1, 1, 1);

        DisplayRotateY = new QLineEdit(groupBox_5);
        DisplayRotateY->setObjectName(QString::fromUtf8("DisplayRotateY"));
        sizePolicy2.setHeightForWidth(DisplayRotateY->sizePolicy().hasHeightForWidth());
        DisplayRotateY->setSizePolicy(sizePolicy2);
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

        FileButton = new QPushButton(centralwidget);
        FileButton->setObjectName(QString::fromUtf8("FileButton"));
        sizePolicy3.setHeightForWidth(FileButton->sizePolicy().hasHeightForWidth());
        FileButton->setSizePolicy(sizePolicy3);
        FileButton->setMaximumSize(QSize(16777215, 50));
        FileButton->setFont(font3);

        gridLayout->addWidget(FileButton, 1, 0, 1, 1);

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

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        groupBox_4->setAutoFillBackground(false);
        groupBox_4->setStyleSheet(QString::fromUtf8(""));
        groupBox_4->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(11, -1, 9, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 1, 5, 1, 1);

        Scale_7 = new QSlider(groupBox_4);
        Scale_7->setObjectName(QString::fromUtf8("Scale_7"));
        sizePolicy.setHeightForWidth(Scale_7->sizePolicy().hasHeightForWidth());
        Scale_7->setSizePolicy(sizePolicy);
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

        Scale_8 = new QSlider(groupBox_4);
        Scale_8->setObjectName(QString::fromUtf8("Scale_8"));
        sizePolicy.setHeightForWidth(Scale_8->sizePolicy().hasHeightForWidth());
        Scale_8->setSizePolicy(sizePolicy);
        Scale_8->setMinimumSize(QSize(0, 19));
        Scale_8->setMaximumSize(QSize(16777215, 19));
        Scale_8->setBaseSize(QSize(0, 19));
        Scale_8->setMinimum(0);
        Scale_8->setMaximum(300);
        Scale_8->setSingleStep(1);
        Scale_8->setValue(100);
        Scale_8->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(Scale_8, 3, 2, 1, 4);

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

        radioButton_7 = new QRadioButton(groupBox_4);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setFont(font1);
        radioButton_7->setLayoutDirection(Qt::LeftToRight);

        gridLayout_7->addWidget(radioButton_7, 1, 3, 1, 1);

        radioButton_5 = new QRadioButton(groupBox_4);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setFont(font1);
        radioButton_5->setLayoutDirection(Qt::LeftToRight);

        gridLayout_7->addWidget(radioButton_5, 1, 4, 1, 1);

        radioButton_6 = new QRadioButton(groupBox_4);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setFont(font1);
        radioButton_6->setLayoutDirection(Qt::LeftToRight);

        gridLayout_7->addWidget(radioButton_6, 1, 1, 1, 2);

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
        gridLayout->setRowStretch(15, 10);
        gridLayout->setRowStretch(16, 2);
        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
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
        gridLayout->setRowMinimumHeight(15, 10);
        gridLayout->setRowMinimumHeight(16, 2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3dViewer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Projection", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Orthographic", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Move", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        DisplayMoveX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DisplayMoveY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        DisplayMoveZ->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        DisplayScale->setText(QCoreApplication::translate("MainWindow", "1.00", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Background", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DisplayRotateX->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        DisplayRotateZ->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        DisplayRotateY->setText(QCoreApplication::translate("MainWindow", "360", nullptr));
        FileButton->setText(QCoreApplication::translate("MainWindow", "Choose file", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Clr", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
