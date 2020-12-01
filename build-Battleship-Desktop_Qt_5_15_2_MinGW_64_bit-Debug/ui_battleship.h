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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Battleship
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Battleship)
    {
        if (Battleship->objectName().isEmpty())
            Battleship->setObjectName(QString::fromUtf8("Battleship"));
        Battleship->resize(800, 600);
        centralwidget = new QWidget(Battleship);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Battleship->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Battleship);
        menubar->setObjectName(QString::fromUtf8("menubar"));
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
