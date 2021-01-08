#include "network_layer.h"

Communication::Communication(Logger* logger)
{
    this->logger = logger;
}

void Communication::createServer()
{
    logger->addToLog("Creating server");
    server = new QTcpServer();
    QHostAddress address = QHostAddress(0xc0a80106); //0xc0a80104
    connect(server, &QTcpServer::newConnection, this, &Communication::serverConnectedWithClient);
    if (!server->listen(address, 2137))
    {
        logger->addToLog("Error listening");
    }
}

void Communication::createClient()
{
    logger->addToLog("Creating client");
    socket = new QTcpSocket();
    connect(socket, &QTcpSocket::connected, this, &Communication::clientConnectedWithServer);
    connect(socket, &QTcpSocket::readyRead, this, &Communication::receivedDatagram);
    QHostAddress address = QHostAddress(0xc0a80106); //0xc0a80104
    socket->bind(address, 2138);
    socket->connectToHost(address, 2137);
}

void Communication::serverConnectedWithClient()
{
    logger->addToLog("Connected to client!");
    socket = server->nextPendingConnection();
    connect(socket, &QTcpSocket::readyRead, this, &Communication::receivedDatagram);
    server->close();
}

void Communication::clientConnectedWithServer()
{
    logger->addToLog("Connected to server!");
}

void Communication::sendMessage(Message &msg)
{
    char *serializedMessage = reinterpret_cast<char*>(&msg);
    socket->write(serializedMessage, sizeof(Message));
    delete serializedMessage;
}

void Communication::sendAttackMessage(int coords)
{
    Message msg(MessageType::Attack, coords);
    sendMessage(msg);
}

void Communication::sendMissMessage(int coords)
{
    Message msg(MessageType::Miss, coords);
    sendMessage(msg);
}
void Communication::sendHitMessage(int coords)
{
    Message msg(MessageType::Attack, coords);
    sendMessage(msg);
}

void Communication::receivedDatagram()
{
    QByteArray arr;
    if(socket->bytesAvailable())
    {
        logger->addToLog("Bytes available");
        arr.append(socket->readAll());
    }

    Message *msg = reinterpret_cast<Message*>(arr.data());
    QString str = "I received from enemy: ";
    str.append(QString::number(msg->field));
    logger->addToLog(str);

    switch(msg->type)
    {
    case MessageType::Attack:
        emit enemyAttacked(msg->field);
    break;

    case MessageType::Hit:
    break;

    case MessageType::Miss:
    break;

    default:
        logger->addToLog("not expected msg. Something went wrong");
    break;

    delete msg;
    }
}
