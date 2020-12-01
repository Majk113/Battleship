#pragma once

#include <QTcpSocket>
#include <QHostAddress>
#include <QTcpServer>

class BattleshipSocket
{
public:
    BattleshipSocket();

    void initializeServer();
    void initializeClient();

private:
    QHostAddress address;
    QTcpSocket *client;
    QTcpServer *server;
};
