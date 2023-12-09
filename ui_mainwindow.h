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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QWidget *verticalLayoutWidget;
  QVBoxLayout *verticalLayout;
  QLineEdit *lineEdit;
  QGridLayout *gridLayout;
  QPushButton *but_19;
  QPushButton *but_15;
  QPushButton *but_2;
  QPushButton *pushButton_6;
  QPushButton *but_17;
  QPushButton *but_16;
  QPushButton *pushButton_8;
  QPushButton *but_7;
  QPushButton *but_3;
  QPushButton *but_9;
  QPushButton *but_10;
  QPushButton *pushButton_7;
  QPushButton *pushButton_12;
  QPushButton *pushButton_2;
  QPushButton *pushButton_9;
  QPushButton *pushButton_10;
  QPushButton *pushButton_4;
  QPushButton *pushButton_3;
  QPushButton *pushButton;
  QPushButton *pushButton_5;
  QPushButton *but_1;
  QPushButton *pushButton_11;
  QPushButton *but_8;
  QPushButton *but_0;
  QPushButton *but_6;
  QPushButton *but_13;
  QPushButton *but_14;
  QPushButton *but_20;
  QPushButton *but_5;
  QPushButton *but_4;
  QPushButton *but_18;
  QPushButton *but_11;
  QLabel *label;
  QLineEdit *xValue;
  QPushButton *pushButton_13;
  QCustomPlot *widget;
  QLineEdit *start;
  QLineEdit *end;
  QLabel *sta;
  QLabel *label_2;
  QPushButton *pushButton_14;
  QButtonGroup *all_btns;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1510, 508);
    MainWindow->setMinimumSize(QSize(0, 0));
    MainWindow->setMaximumSize(QSize(99999, 99999));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    verticalLayoutWidget = new QWidget(centralwidget);
    verticalLayoutWidget->setObjectName(
        QString::fromUtf8("verticalLayoutWidget"));
    verticalLayoutWidget->setGeometry(QRect(40, 40, 791, 411));
    verticalLayout = new QVBoxLayout(verticalLayoutWidget);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    lineEdit = new QLineEdit(verticalLayoutWidget);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(3);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
    lineEdit->setSizePolicy(sizePolicy);
    lineEdit->setReadOnly(true);

    verticalLayout->addWidget(lineEdit);

    gridLayout = new QGridLayout();
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
    gridLayout->setHorizontalSpacing(3);
    gridLayout->setVerticalSpacing(17);
    gridLayout->setContentsMargins(10, 10, 10, 10);
    but_19 = new QPushButton(verticalLayoutWidget);
    all_btns = new QButtonGroup(MainWindow);
    all_btns->setObjectName(QString::fromUtf8("all_btns"));
    all_btns->addButton(but_19);
    but_19->setObjectName(QString::fromUtf8("but_19"));
    but_19->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_19, 1, 0, 1, 1);

    but_15 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_15);
    but_15->setObjectName(QString::fromUtf8("but_15"));
    but_15->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_15, 2, 1, 1, 1);

    but_2 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_2);
    but_2->setObjectName(QString::fromUtf8("but_2"));
    but_2->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_2, 0, 0, 1, 1);

    pushButton_6 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_6);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(pushButton_6, 3, 0, 1, 1);

    but_17 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_17);
    but_17->setObjectName(QString::fromUtf8("but_17"));
    but_17->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_17, 2, 0, 1, 1);

    but_16 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_16);
    but_16->setObjectName(QString::fromUtf8("but_16"));
    but_16->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_16, 3, 1, 1, 1);

    pushButton_8 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_8);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
    pushButton_8->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(pushButton_8, 4, 6, 1, 1);

    but_7 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_7);
    but_7->setObjectName(QString::fromUtf8("but_7"));
    but_7->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(but_7, 1, 6, 1, 1);

    but_3 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_3);
    but_3->setObjectName(QString::fromUtf8("but_3"));
    but_3->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(but_3, 2, 6, 1, 1);

    but_9 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_9);
    but_9->setObjectName(QString::fromUtf8("but_9"));
    but_9->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(but_9, 3, 6, 1, 1);

    but_10 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_10);
    but_10->setObjectName(QString::fromUtf8("but_10"));
    but_10->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(but_10, 0, 6, 1, 1);

    pushButton_7 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_7);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
    pushButton_7->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(pushButton_7, 0, 5, 1, 1);

    pushButton_12 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_12);
    pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

    gridLayout->addWidget(pushButton_12, 1, 5, 1, 1);

    pushButton_2 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_2);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

    gridLayout->addWidget(pushButton_2, 2, 5, 1, 1);

    pushButton_9 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_9);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

    gridLayout->addWidget(pushButton_9, 3, 5, 1, 1);

    pushButton_10 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_10);
    pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

    gridLayout->addWidget(pushButton_10, 3, 4, 1, 1);

    pushButton_4 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_4);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

    gridLayout->addWidget(pushButton_4, 2, 4, 1, 1);

    pushButton_3 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_3);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

    gridLayout->addWidget(pushButton_3, 1, 4, 1, 1);

    pushButton = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));

    gridLayout->addWidget(pushButton, 1, 3, 1, 1);

    pushButton_5 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_5);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

    gridLayout->addWidget(pushButton_5, 2, 3, 1, 1);

    but_1 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_1);
    but_1->setObjectName(QString::fromUtf8("but_1"));

    gridLayout->addWidget(but_1, 3, 3, 1, 1);

    pushButton_11 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(pushButton_11);
    pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
    pushButton_11->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(pushButton_11, 3, 2, 1, 1);

    but_8 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_8);
    but_8->setObjectName(QString::fromUtf8("but_8"));
    but_8->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_8, 4, 5, 1, 1);

    but_0 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_0);
    but_0->setObjectName(QString::fromUtf8("but_0"));

    gridLayout->addWidget(but_0, 4, 4, 1, 1);

    but_6 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_6);
    but_6->setObjectName(QString::fromUtf8("but_6"));
    but_6->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_6, 4, 3, 1, 1);

    but_13 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_13);
    but_13->setObjectName(QString::fromUtf8("but_13"));
    but_13->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(but_13, 0, 4, 1, 1);

    but_14 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_14);
    but_14->setObjectName(QString::fromUtf8("but_14"));
    but_14->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}          "));

    gridLayout->addWidget(but_14, 0, 3, 1, 1);

    but_20 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_20);
    but_20->setObjectName(QString::fromUtf8("but_20"));
    but_20->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_20, 1, 1, 1, 1);

    but_5 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_5);
    but_5->setObjectName(QString::fromUtf8("but_5"));
    but_5->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_5, 0, 1, 1, 1);

    but_4 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_4);
    but_4->setObjectName(QString::fromUtf8("but_4"));
    but_4->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_4, 0, 2, 1, 1);

    but_18 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_18);
    but_18->setObjectName(QString::fromUtf8("but_18"));
    but_18->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_18, 1, 2, 1, 1);

    but_11 = new QPushButton(verticalLayoutWidget);
    all_btns->addButton(but_11);
    but_11->setObjectName(QString::fromUtf8("but_11"));
    but_11->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));

    gridLayout->addWidget(but_11, 2, 2, 1, 1);

    gridLayout->setRowStretch(0, 25);

    verticalLayout->addLayout(gridLayout);

    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(50, 460, 58, 16));
    xValue = new QLineEdit(centralwidget);
    xValue->setObjectName(QString::fromUtf8("xValue"));
    xValue->setGeometry(QRect(80, 460, 100, 21));
    xValue->setMaximumSize(QSize(100, 16777215));
    xValue->setReadOnly(false);
    pushButton_13 = new QPushButton(centralwidget);
    pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
    pushButton_13->setGeometry(QRect(1100, 460, 211, 41));
    pushButton_13->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));
    widget = new QCustomPlot(centralwidget);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(890, 50, 601, 391));
    start = new QLineEdit(centralwidget);
    start->setObjectName(QString::fromUtf8("start"));
    start->setGeometry(QRect(300, 460, 113, 21));
    end = new QLineEdit(centralwidget);
    end->setObjectName(QString::fromUtf8("end"));
    end->setGeometry(QRect(460, 460, 113, 21));
    sta = new QLabel(centralwidget);
    sta->setObjectName(QString::fromUtf8("sta"));
    sta->setGeometry(QRect(200, 460, 101, 16));
    label_2 = new QLabel(centralwidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(430, 460, 58, 16));
    pushButton_14 = new QPushButton(centralwidget);
    pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
    pushButton_14->setGeometry(QRect(620, 460, 151, 21));
    pushButton_14->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(250, 250,  250);\n"
        "  color: black;\n"
        "  border-radius:35px;\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}         "));
    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    but_19->setText(
        QCoreApplication::translate("MainWindow", "asin(", nullptr));
#if QT_CONFIG(shortcut)
    but_19->setShortcut(
        QCoreApplication::translate("MainWindow", "Shift+S", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_15->setText(QCoreApplication::translate("MainWindow", "log(", nullptr));
#if QT_CONFIG(shortcut)
    but_15->setShortcut(
        QCoreApplication::translate("MainWindow", "L", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_2->setText(QCoreApplication::translate("MainWindow", "sin(", nullptr));
#if QT_CONFIG(shortcut)
    but_2->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_6->setText(
        QCoreApplication::translate("MainWindow", "mod", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_6->setShortcut(
        QCoreApplication::translate("MainWindow", "M", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_17->setText(
        QCoreApplication::translate("MainWindow", "sqrt(", nullptr));
#if QT_CONFIG(shortcut)
    but_17->setShortcut(
        QCoreApplication::translate("MainWindow", "Q", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_16->setText(QCoreApplication::translate("MainWindow", "ln(", nullptr));
#if QT_CONFIG(shortcut)
    but_16->setShortcut(
        QCoreApplication::translate("MainWindow", "L", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_8->setText(
        QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_8->setShortcut(
        QCoreApplication::translate("MainWindow", "=", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_7->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(shortcut)
    but_7->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_3->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
    but_3->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_9->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
    but_9->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_10->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
    but_10->setShortcut(
        QCoreApplication::translate("MainWindow", "/", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_7->setText(
        QCoreApplication::translate("MainWindow", "x", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_7->setShortcut(
        QCoreApplication::translate("MainWindow", "X", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_12->setText(
        QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_12->setShortcut(
        QCoreApplication::translate("MainWindow", "9", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_2->setText(
        QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_2->setShortcut(
        QCoreApplication::translate("MainWindow", "6", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_9->setText(
        QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_9->setShortcut(
        QCoreApplication::translate("MainWindow", "3", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_10->setText(
        QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_10->setShortcut(
        QCoreApplication::translate("MainWindow", "2", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_4->setText(
        QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_4->setShortcut(
        QCoreApplication::translate("MainWindow", "5", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_3->setText(
        QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_3->setShortcut(
        QCoreApplication::translate("MainWindow", "8", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton->setText(
        QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
    pushButton->setShortcut(
        QCoreApplication::translate("MainWindow", "7", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_5->setText(
        QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_5->setShortcut(
        QCoreApplication::translate("MainWindow", "4", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
    but_1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif  // QT_CONFIG(shortcut)
    pushButton_11->setText(
        QCoreApplication::translate("MainWindow", ",", nullptr));
#if QT_CONFIG(shortcut)
    pushButton_11->setShortcut(
        QCoreApplication::translate("MainWindow", ",", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_8->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
#if QT_CONFIG(shortcut)
    but_8->setShortcut(QCoreApplication::translate("MainWindow", ")", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
    but_0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_6->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
#if QT_CONFIG(shortcut)
    but_6->setShortcut(QCoreApplication::translate("MainWindow", "(", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_13->setText(QCoreApplication::translate("MainWindow", "del", nullptr));
#if QT_CONFIG(shortcut)
    but_13->setShortcut(
        QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_14->setText(
        QCoreApplication::translate("MainWindow", "clean", nullptr));
#if QT_CONFIG(shortcut)
    but_14->setShortcut(
        QCoreApplication::translate("MainWindow", "Shift+Backspace", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_20->setText(
        QCoreApplication::translate("MainWindow", "acos(", nullptr));
#if QT_CONFIG(shortcut)
    but_20->setShortcut(
        QCoreApplication::translate("MainWindow", "Shift+C", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_5->setText(QCoreApplication::translate("MainWindow", "cos(", nullptr));
#if QT_CONFIG(shortcut)
    but_5->setShortcut(QCoreApplication::translate("MainWindow", "C", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_4->setText(QCoreApplication::translate("MainWindow", "tan(", nullptr));
#if QT_CONFIG(shortcut)
    but_4->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_18->setText(
        QCoreApplication::translate("MainWindow", "atan(", nullptr));
#if QT_CONFIG(shortcut)
    but_18->setShortcut(
        QCoreApplication::translate("MainWindow", "Shift+T", nullptr));
#endif  // QT_CONFIG(shortcut)
    but_11->setText(QCoreApplication::translate("MainWindow", "^(", nullptr));
#if QT_CONFIG(shortcut)
    but_11->setShortcut(
        QCoreApplication::translate("MainWindow", "^", nullptr));
#endif  // QT_CONFIG(shortcut)
    label->setText(QCoreApplication::translate("MainWindow", "x = ", nullptr));
    xValue->setInputMask(QString());
    xValue->setText(QString());
    pushButton_13->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\277\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321"
        "\214 \320\263\321\200\320\260\321\204\320\270\320\272",
        nullptr));
    sta->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\262 "
        "\320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320"
        "\265 \320\276\321\202 ",
        nullptr));
    label_2->setText(QCoreApplication::translate("MainWindow",
                                                 "\320\264\320\276 ", nullptr));
    pushButton_14->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321"
        "\202\320\276\321\200 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\260",
        nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
