#pragma once

#include "network_layer.h"
#include "logger.h"

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QSignalMapper>
#include <QDebug>

#include <memory>
#include <iostream>
#include <utility>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class Battleship; }
QT_END_NAMESPACE

class Battleship : public QMainWindow
{
    Q_OBJECT

public:
    Battleship(QWidget *parent = nullptr);
    ~Battleship();

private:
    Ui::Battleship *ui;
    QSignalMapper *myMapper;
    QSignalMapper *enemyMapper;
    QPushButton *myBoard[10][10];
    QPushButton *enemyBoard[10][10];

    QTcpServer* server;
    QTcpSocket* socket;

    Logger* logger;

    void initializeBoards();

private slots:
    void slotFun(int value);
    void slotFun2(int value);
    void slotFun3();
    void slotFun4();
    void slotFun5();

public slots:
    void createServer();
    void createClient();
};
