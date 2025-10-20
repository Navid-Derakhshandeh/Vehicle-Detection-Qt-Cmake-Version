/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelVideo;
    QLabel *labelCount;
    QLabel *labelvideo2;
    QLabel *labelcount2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1482, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelVideo = new QLabel(centralwidget);
        labelVideo->setObjectName(QString::fromUtf8("labelVideo"));
        labelVideo->setGeometry(QRect(30, 20, 731, 461));
        labelCount = new QLabel(centralwidget);
        labelCount->setObjectName(QString::fromUtf8("labelCount"));
        labelCount->setGeometry(QRect(40, 500, 111, 61));
        labelvideo2 = new QLabel(centralwidget);
        labelvideo2->setObjectName(QString::fromUtf8("labelvideo2"));
        labelvideo2->setGeometry(QRect(835, 50, 621, 431));
        labelcount2 = new QLabel(centralwidget);
        labelcount2->setObjectName(QString::fromUtf8("labelcount2"));
        labelcount2->setGeometry(QRect(850, 520, 66, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1482, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelVideo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelCount->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelvideo2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelcount2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
