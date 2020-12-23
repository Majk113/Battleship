#pragma once

#include <QTcpServer>
#include <QTcpSocket>

#include "logger.h"


class TcpCommunication
{
public:
    TcpCommunication() = delete;
    TcpCommunication(Logger* logger);

private:
    QTcpSocket* socket;
    QTcpServer* server;
};
