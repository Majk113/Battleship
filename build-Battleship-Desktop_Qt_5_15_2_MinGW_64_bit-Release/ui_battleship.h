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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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
    QPushButton *serverButton;
    QPushButton *clientButton;
    QPlainTextEdit *logTextWindow;
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
        gridLayoutWidget->setGeometry(QRect(10, 229, 331, 311));
        myGridLayout = new QGridLayout(gridLayoutWidget);
        myGridLayout->setSpacing(0);
        myGridLayout->setObjectName(QString::fromUtf8("myGridLayout"));
        myGridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        myGridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(400, 230, 331, 311));
        enemyGridLayout = new QGridLayout(gridLayoutWidget_2);
        enemyGridLayout->setSpacing(0);
        enemyGridLayout->setObjectName(QString::fromUtf8("enemyGridLayout"));
        enemyGridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        enemyGridLayout->setContentsMargins(0, 0, 0, 0);
        serverButton = new QPushButton(centralwidget);
        serverButton->setObjectName(QString::fromUtf8("serverButton"));
        serverButton->setGeometry(QRect(60, 80, 75, 23));
        clientButton = new QPushButton(centralwidget);
        clientButton->setObjectName(QString::fromUtf8("clientButton"));
        clientButton->setGeometry(QRect(150, 80, 75, 23));
        logTextWindow = new QPlainTextEdit(centralwidget);
        logTextWindow->setObjectName(QString::fromUtf8("logTextWindow"));
        logTextWindow->setGeometry(QRect(420, 20, 311, 181));
        logTextWindow->setReadOnly(true);
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
        serverButton->setText(QCoreApplication::translate("Battleship", "Server", nullptr));
        clientButton->setText(QCoreApplication::translate("Battleship", "Host", nullptr));
        logTextWindow->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class Battleship: public Ui_Battleship {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLESHIP_H
