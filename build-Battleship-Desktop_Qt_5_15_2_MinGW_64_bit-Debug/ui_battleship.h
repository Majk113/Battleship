/********************************************************************************
** Form generated from reading UI file 'battleship.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLESHIP_H
#define UI_BATTLESHIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Battleship
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *myGridLayout;
    QWidget *gridLayoutWidget_2;
    QGridLayout *enemyGridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Battleship)
    {
        if (Battleship->objectName().isEmpty())
            Battleship->setObjectName(QString::fromUtf8("Battleship"));
        Battleship->resize(752, 580);
        centralwidget = new QWidget(Battleship);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 219, 351, 321));
        myGridLayout = new QGridLayout(gridLayoutWidget);
        myGridLayout->setObjectName(QString::fromUtf8("myGridLayout"));
        myGridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(390, 220, 351, 321));
        enemyGridLayout = new QGridLayout(gridLayoutWidget_2);
        enemyGridLayout->setObjectName(QString::fromUtf8("enemyGridLayout"));
        enemyGridLayout->setContentsMargins(0, 0, 0, 0);
        Battleship->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Battleship);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 752, 21));
        Battleship->setMenuBar(menubar);
        statusbar = new QStatusBar(Battleship);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Battleship->setStatusBar(statusbar);

        retranslateUi(Battleship);

        QMetaObject::connectSlotsByName(Battleship);
    } // setupUi

    void retranslateUi(QMainWindow *Battleship)
    {
        Battleship->setWindowTitle(QCoreApplication::translate("Battleship", "Battleship", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Battleship: public Ui_Battleship {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLESHIP_H
