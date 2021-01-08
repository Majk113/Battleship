#pragma once

#include "network_layer.h"
#include "logger.h"
#include "field.h"
#include "message.h"
#include "battleship_engine.h"

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QSignalMapper>
#include <QDebug>

#include <memory>
#include <iostream>
#include <utility>
#include <string>
#include <array>

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

    Logger* logger;
    Communication* communication;

    BattleshipEngine engine;

    void initializeBoards();
    void initializeFields();

private slots:
    void clickedMyBoard(int value);
    void clickedEnemyBoard(int value);
    void connectedWithClientCallback();
    void connectedWithServerCallback();
    void receivedDatagram();

    void changeButtonsColour(int value);

public slots:
    void createServer();
    void createClient();
};
