#pragma once

#include <QTcpServer>
#include <QTcpSocket>
#include <QObject>

#include "logger.h"
#include "message.h"

class Communication : public QObject
{
    Q_OBJECT

public:
    Communication() = delete;
    Communication(Logger* logger);
    virtual ~Communication() {};

private:
    Logger* logger;
    QTcpSocket* socket;
    QTcpServer* server;
    void sendMessage(Message &msg);

private slots:
    void receivedDatagram();
    void serverConnectedWithClient();
    void clientConnectedWithServer();

public slots:
    void createServer();
    void createClient();
    void sendAttackMessage(int coords);
    void sendMissMessage(int coords);
    void sendHitMessage(int coords);

signals:
    void enemyAttacked(int coords);

};
